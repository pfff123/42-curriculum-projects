/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 18:40:21 by pfff              #+#    #+#             */
/*   Updated: 2025/10/08 07:06:23 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		slen;
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	i = 0;
	str = malloc(slen + 1);
	if (!str)
		return (NULL);
	while (i < slen)
	{
		str[i] = f(i, s[i]);
		i ++;
	}
	str[slen] = '\0';
	return (str);
}
