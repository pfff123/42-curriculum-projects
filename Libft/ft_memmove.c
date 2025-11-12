/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:18:25 by pfff              #+#    #+#             */
/*   Updated: 2025/10/10 06:25:23 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = dst;
	s = src;
	if (dst == src)
		return (dst);
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i ++;
		}
	}
	else
	{
		while (len --)
			d[len] = s[len];
	}
	return (dst);
}
// #include <stdio.h>
// void printarray(char *s, int size)
// {
// 	for(int i = 0; i < size ; i ++)
// 		printf("%c ",(unsigned char)s[i]);
// 	printf("\n");
// }
// int main()
// {
// 	char s[3]= {'a','b','c'};
// 	char d[3]={'c','d','e'};
// 	printarray(d,5);
// 	printarray(ft_memmove(d,s,3), 5);
// 	return 0;
// }
