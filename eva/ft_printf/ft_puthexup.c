/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:34 by yafu              #+#    #+#             */
/*   Updated: 2025/10/19 09:47:02 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexup(unsigned long n)
{
	int		count;
	char	*hex;

	hex = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_puthexup(n / 16);
	count += ft_putchar(hex[n % 16]);
	return (count);
}
