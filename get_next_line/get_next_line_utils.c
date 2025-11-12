/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:05:24 by pfff              #+#    #+#             */
/*   Updated: 2025/11/07 13:20:47 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			n;
	unsigned int	slen;

	slen = ft_strlen(s);
	if (start >= slen)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	n = slen - start;
	if (len > n)
		len = n;
	sub = malloc (len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}

char	*ft_strjoin(char *line, const char *buf)
{
	size_t	lenl;
	size_t	lenb;
	char	*s3;

	if (!buf)
		return (NULL);
	if (!line)
	{
		line = malloc (1);
		if (!line)
			return (NULL);
		line[0] = '\0';
	}
	lenl = ft_strlen(line);
	lenb = ft_strlen(buf);
	s3 = malloc(lenl + lenb + 1);
	if (!s3)
		return (free(line), NULL);
	ft_memcpy(s3, line, lenl);
	ft_memcpy(s3 + lenl, buf, lenb);
	s3[lenl + lenb] = '\0';
	free(line);
	return (s3);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	while (*s)
	{
		if (*s == cc)
			return ((char *)s);
		s ++;
	}
	if (cc == '\0')
		return ((char *)s);
	return (NULL);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dst;
	s = src;
	i = 0;
	if (dst == src)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i ++;
	}
	return (dst);
}
