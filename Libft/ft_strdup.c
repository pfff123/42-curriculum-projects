/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:29:54 by pfff              #+#    #+#             */
/*   Updated: 2025/10/11 10:14:30 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			slen;
	char		*s2;

	slen = ft_strlen(s1);
	s2 = malloc (slen + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, slen);
	s2[slen] = '\0';
	return (s2);
}

// #include <stdio.h>
// int main()
// {
// 	char s1[]= "shdis";
// 	char *s2 = ft_strdup(s1);
// 	printf("%s",s2);
// 	free(s2);
// }