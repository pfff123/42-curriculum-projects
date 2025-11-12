/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:39:42 by yafu              #+#    #+#             */
/*   Updated: 2025/10/21 15:27:52 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	checkset(char c)
{
	char	*set;

	set = "cspdiuxX%";
	while (*set)
	{
		if (*set == c)
			return (1);
		set ++;
	}
	return (0);
}

static int	apply_put(char c, va_list *list)
{
	if (c == 'p')
		return (ft_putptr(va_arg(*list, unsigned long)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(*list, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(*list, unsigned int)));
	else if (c == 'x')
		return (ft_puthexlow(va_arg(*list, unsigned int)));
	else if (c == 'X')
		return (ft_puthexup(va_arg(*list, unsigned int)));
	else if (c == 'c')
		return (ft_putchar(va_arg(*list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*list, const char *)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (-1);
}

static int	count_put(const char *format, va_list *list)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			if (!(*(format + 1)))
				return (-1);
			if (checkset(*(format + 1)))
			{
				count += apply_put(*(format + 1), list);
				format ++;
			}
			else
				count += ft_putchar('%');
		}
		else
			count += ft_putchar(*format);
		format ++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		count;

	if (!format)
		return (-1);
	va_start (list, format);
	count = count_put(format, &list);
	va_end (list);
	if (count < 0)
		return (-1);
	return (count);
}

// #include <stdio.h>
// int main(void)
// {
//     // int a = 42;
//     // void *p = &a;
//     void *z = NULL;
//     int r1, r2;

//     r1 = printf("SYS:  %%='%%'\n");
//     r2 = ft_printf("FT:  %%='%%'\n");
//     printf("SYS ret=%d | FT ret=%d\n", r1, r2);

// 	int r3 = ft_printf("d=%d\n", -42);
// 	int r4 = printf("d=%d\n", -42);
// 	printf("SYS ret=%d | FT ret=%d\n", r3, r4);
//     r1 = printf("SYS NULLs: s=%s p=%p\n", (char*)NULL, z);
//     r2 = ft_printf("FT  NULLs: s=%s p=%p\n", (char*)NULL, z);
//     printf("SYS ret=%d | FT ret=%d\n", r1, r2);

//     return 0;
// }
