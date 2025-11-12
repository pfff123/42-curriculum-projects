/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 19:20:26 by pfff              #+#    #+#             */
/*   Updated: 2025/10/11 10:02:10 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		s2len;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (checkset(s1[start], set) == 1)
		start ++;
	while (end > start && checkset(s1[end - 1], set) == 1)
		end --;
	s2len = end - start;
	s2 = malloc(s2len + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1 + start, s2len);
	s2[s2len] = '\0';
	return (s2);
}
// #include <stdio.h>
// int main()
// {
//  	char *s1 = " n\nHello \t  Please\n Trim me !\n ";
//  	char *s2 = "Hello \t  Please\n Trim me !";
//  	char *ret = ft_strtrim(s1, " \n\t");
// 	printf("%s", ret);
// }