/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:43:35 by pfff              #+#    #+#             */
/*   Updated: 2025/10/10 08:11:50 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				slen;
	unsigned char	cc;

	cc = (unsigned char)c;
	slen = ft_strlen(s);
	while (slen >= 0)
	{
		if (s[slen] == cc)
			return ((char *)(s + slen));
		slen --;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char s[] = "dhif21ucsdhf1s";
//     char *ptr = ft_strrchr(s, 'w');
//     if (ptr)
//     {
//         while (*ptr)
//         {
//             printf("%c", *ptr);
//             ptr++;
//         }
//         printf("\n");
//     }
//     else
//     {
//         printf("Not found\n");
//     }
//     return 0;
// }