/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:27:02 by pfff              #+#    #+#             */
/*   Updated: 2025/10/10 08:07:33 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	if (!size)
		return (slen);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (slen);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char dst[100];
// 	char dst2[100];
// 	char src[] = "dahsdha";
// 	ft_strlcpy(dst,src,0);
// 	strlcpy(dst2,src, 0);
// 	printf("%s\n", dst);
// 	printf("%zu\n", ft_strlcpy(dst,src,0));
// 	printf("%s\n", dst2);
// 	printf("%lu\n", strlcpy(dst2,src,0));
// }
