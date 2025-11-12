/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:47 by yafu              #+#    #+#             */
/*   Updated: 2025/10/21 15:25:03 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long ptr)
{
	int	i;

	i = 0;
	if (!ptr)
	{
		return (ft_putstr("(nil)"));
	}
	i += ft_putstr("0x");
	i += ft_puthexlow(ptr);
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char *p = NULL;
// 	int m = printf("%p\n",p);
// 	printf("%d\n",m);
// 	int i = ft_putptr((unsigned long)p);
// 	printf("\n%d\n",i);
// 	return 0;
// }