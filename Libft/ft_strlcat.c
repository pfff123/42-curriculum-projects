/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 22:09:39 by pfff              #+#    #+#             */
/*   Updated: 2025/10/08 06:59:19 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	i = 0;
	lend = 0;
	lens = 0;
	while (dst[lend])
		lend ++;
	while (src[lens])
		lens ++;
	if (lend >= dstsize)
		return (dstsize + lens);
	while (src[i] && i < dstsize - lend - 1)
	{
		dst[lend + i] = src[i];
		i ++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char dst[16] = "hello" ;
// 	char src[] = "dahsdha";
// 	char dst2[16] = "hello";
// 	char src2[] = "dahsdha";	
// 	printf("%s\n", dst);
// 	printf("%lu\n", strlcat(dst,src,8));
// 	printf("%s\n", dst2);
// 	printf("%d\n", ft_strlcat(dst2,src2,8));
// }