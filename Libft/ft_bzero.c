/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 08:52:57 by pfff              #+#    #+#             */
/*   Updated: 2025/10/08 06:53:17 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = s;
	if (n > 0)
	{
		while (i < n)
			p[i ++] = 0;
	}
}
// #include <stdio.h>

// void print_byte(char *s, int size)
// {
// 	for (int i = 0; i < size; i ++)
// 		printf("%02X ",(unsigned char)s[i]);
// 	printf("\n");
// }
// int main()
// {
// 	char s[12];
// 	print_byte(s,12);
// 	ft_bzero(s,1);
// 	print_byte(s,12);
// 	return 0;
// }