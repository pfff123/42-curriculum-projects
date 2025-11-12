/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 18:53:14 by pfff              #+#    #+#             */
/*   Updated: 2025/10/08 07:13:08 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		b;
	size_t				i;

	str = s;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == b)
			return ((void *)&str[i]);
		i ++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	unsigned char s[10]={'a','b','c','d'};
// 	unsigned char *s2 = ft_memchr(s,'c',10);
// 	if (s2 == NULL)
// 		printf("not found");
// 	else
// 		printf("%c",*s2);
// }