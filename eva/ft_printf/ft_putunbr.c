/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:59 by yafu              #+#    #+#             */
/*   Updated: 2025/10/19 10:16:57 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	char	c;
	int		i;

	i = 1;
	if (n > 9)
		i += ft_putunbr(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	printf(" %d",ft_putunbr(213120));
// 	return 0;
// }