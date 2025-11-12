/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:01:15 by pfff              #+#    #+#             */
/*   Updated: 2025/11/07 13:10:39 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char *stash, const char *buf);
char	*ft_strchr(const char *s, int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *str);

#endif