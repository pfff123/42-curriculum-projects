/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 08:54:21 by pfff              #+#    #+#             */
/*   Updated: 2025/10/08 06:53:41 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = b;
	while (i < len)
		p[i ++] = c;
	return (b);
}
// #include <stdio.h>
// void print_byte(char *buf, int size)
// {
// 	for (int i = 0; i < size; i ++)
// 		printf("%02X ", (unsigned char)buf[i]);
// 	printf("\n");
// }
// int main()
// {
// 	char buf[10];
// 	void *b;
// 	print_byte(buf,10);
// 	b = ft_memset(buf,0,10);
// 	print_byte(b,10);
// }