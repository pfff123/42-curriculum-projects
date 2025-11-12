/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:12:53 by pfff              #+#    #+#             */
/*   Updated: 2025/10/10 07:36:03 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*s3;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = malloc(len1 + len2 + 1);
	if (!s3)
		return (NULL);
	ft_memcpy(s3, s1, len1);
	ft_memcpy(s3 + len1, s2, len2);
	s3[len1 + len2] = '\0';
	return (s3);
}

// #include <stdio.h>
// int main()
// {
// 	char *s3;
// 	s3 = ft_strjoin("","");
// 	printf("%s\n",s3);
// 	free(s3);
// 	return 0;
// }