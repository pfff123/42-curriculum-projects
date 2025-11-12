/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:24:56 by pfff              #+#    #+#             */
/*   Updated: 2025/10/11 08:24:03 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countstr(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count ++;
		}
		else if (s[i] == c)
			in_word = 0;
		i ++;
	}
	return (count);
}

static char	**freeall(char **ar, int x)
{
	while (x >= 0)
	{
		free(ar[x]);
		x --;
	}
	free(ar);
	return (NULL);
}

static char	**copy(const char *s, char c, char **ar)
{
	int			x;
	int			size;
	const char	*start;
	int			nbr_str;

	x = 0;
	nbr_str = countstr(s, c);
	while (x < nbr_str && *s)
	{
		while (*s == c && *s)
			s ++;
		start = s;
		while (*s != c && *s)
			s ++;
		size = s - start;
		ar[x] = malloc(sizeof(char) * (size + 1));
		if (!ar[x])
			return (freeall(ar, x - 1));
		ft_memcpy(ar[x], start, size);
		ar[x][size] = '\0';
		x ++;
	}
	ar[x] = NULL;
	return (ar);
}

char	**ft_split(char const *s, char c)
{
	char	**ar;

	if (s == NULL)
		return (NULL);
	ar = malloc (sizeof(void *) * (countstr(s, c) + 1));
	if (!ar)
		return (NULL);
	ar = copy(s, c, ar);
	if (!ar)
		return (NULL);
	return (ar);
}

// #include <stdio.h>
// int main()
// {
// 	char s[]= "ssssfhfshhidfhshfdihsddds";
// 	char c = 's';
// 	char **ar;
// 	ar = ft_split(s,c);
// 	//printf("%i\n", countstr(s, c));
// 	printf("%s\n", ar[0]);
// 	printf("%s\n", ar[1]);
// 	printf("%s\n", ar[2]);
// 	printf("%s\n", ar[3]);
// 	printf("%s\n", ar[4]);
// 	free (ar);
// 	return 0;
// }