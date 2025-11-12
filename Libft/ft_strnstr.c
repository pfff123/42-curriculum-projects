/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:43:31 by pfff              #+#    #+#             */
/*   Updated: 2025/10/09 06:52:04 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (i + n < len && haystack[i + n] == needle[n])
		{
			n ++;
			if (!needle[n])
				return ((char *)&haystack[i]);
		}
		n = 0;
		i ++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char s1[]= "ABS SADA";
// 	char ne[]= "ADA";
// 	char *start = ft_strnstr(s1,ne, 9);
// 	if (start)
// 		while (*start)
// 		{
// 			printf("%c",*start);
// 			start ++;
// 		}
// 	else
// 	{
// 		printf("Not found");
// 	}
// 	return 0;
// }