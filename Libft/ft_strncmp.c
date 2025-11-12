/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:17:10 by pfff              #+#    #+#             */
/*   Updated: 2025/10/10 08:17:13 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i ++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
//  	char *s2 = "\x12\x02";
// 	printf("%d\n", ft_strncmp(s1,s2,3));
// 	printf("%d\n", strncmp(s1,s2,3));
// 	return 0;
// }