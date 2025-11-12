/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 10:19:37 by pfff              #+#    #+#             */
/*   Updated: 2025/10/10 06:25:10 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dst;
	s = src;
	i = 0;
	if (dst == src)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i ++;
	}
	return (dst);
}
// #include <stdio.h>
// void printbyte(char *s,int size)
// {
// 	for (int i = 0; i < size; i ++)
// 		printf("%02X ",(unsigned char)s[i]);
// 	printf("\n");
// }
// int main()
// {
// 	char s[5]= {'A','B','C','D','E'};
// 	char d[5];
// 	printbyte(s,5);
// 	printbyte(d,5);
// 	printbyte(ft_memcpy(d,s,5),5);
// 	printbyte(d,5);
// }