/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:53 by yafu              #+#    #+#             */
/*   Updated: 2025/10/19 10:10:09 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	i;
	int	n;

	i = 0;
	if (!str)
		return ((int) write(1, "(null)", 6));
	while (str[i])
		i ++;
	n = write (1, str, i);
	if (n >= 0)
		return (i);
	return (-1);
}
// #include <stdio.h>

// int main()
// {
// 	char *str = NULL;
// 	ft_putstr(str);
// 	// printf("%s",str);
// 	return 0;
// }