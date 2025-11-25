/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:04 by yafu              #+#    #+#             */
/*   Updated: 2025/10/19 08:21:28 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlow(unsigned long n)
{
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_puthexlow(n / 16);
	count += ft_putchar(hex[n % 16]);
	return (count);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%x\n",42095);
// 	printf("\n%d\n",ft_puthexlow(42095));
// 	return 0;
// }
