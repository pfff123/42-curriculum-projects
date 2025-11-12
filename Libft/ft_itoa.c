/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 18:00:48 by pfff              #+#    #+#             */
/*   Updated: 2025/10/11 10:01:07 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countten(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i += 1;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		i += 1;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	long	nn;
	int		slen;
	int		start_index;

	nn = n;
	slen = countten(nn);
	nbr = malloc(slen + 1);
	if (!nbr)
		return (NULL);
	nbr[slen] = '\0';
	start_index = 0;
	if (n < 0)
	{
		nbr[0] = '-';
		nn = -nn;
		start_index = 1;
	}
	while (slen > start_index)
	{
		nbr[slen - 1] = nn % 10 + '0';
		slen --;
		nn /= 10;
	}
	return (nbr);
}

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
// 	printf("%i\n", countten(0));
// 	printf("%i\n", 0);
// 	printf ("%s", ft_itoa(0));
// 	return 0;
// }