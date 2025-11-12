/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 20:20:25 by pfff              #+#    #+#             */
/*   Updated: 2025/10/10 08:12:28 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char s[] = "dhif21ucsdhf1s";
//     char *ptr = strchr(s, '\0');
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