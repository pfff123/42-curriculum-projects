/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 19:31:52 by pfff              #+#    #+#             */
/*   Updated: 2025/10/11 10:03:16 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return ((void *)p);
}

// #include <stdio.h>
// void printbyte(char *s, int size)
// {
// 	for (int i = 0; i < size; i ++)
// 		printf("%02X ", (unsigned char)s[i]);
// 	printf("\n");
// }
// int main()
// {
// 	char s[10];
// 	printbyte(s,10);
// 	printbyte(ft_calloc(10,1),10);
// }