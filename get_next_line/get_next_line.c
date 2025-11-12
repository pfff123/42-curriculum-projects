/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:02:43 by pfff              #+#    #+#             */
/*   Updated: 2025/11/07 13:47:20 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
@brief:read, copy from buf to line 
@param: int fd, line
@return: line
*/
static char	*get_line(int fd, char *line)
{
	ssize_t	n;
	char	*buf;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	n = 1;
	while (1)
	{
		n = read(fd, buf, BUFFER_SIZE);
		if (n == 0)
			break ;
		if (n < 0)
			return (free (buf), free(line), NULL);
		buf[n] = '\0';
		line = ft_strjoin(line, buf);
		if (!line)
			return (free (buf), NULL);
		if (ft_strchr(line, '\n'))
			break ;
	}
	free(buf);
	return (line);
}

/*
@: extract the line 
@: line
@: result
*/
static char	*give_line(const char *line)
{
	char	*result;
	char	*newline_pos;
	int		len;

	if (!line)
		return (NULL);
	newline_pos = ft_strchr(line, '\n');
	if (newline_pos)
		len = newline_pos - line + 1;
	else
		len = ft_strlen(line);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	ft_memcpy(result, line, len);
	result[len] = '\0';
	return (result);
}
/*
@:delete what has been displayed (the previous line)
@:stash
@:stash after delete
*/

static char	*del_line(const char *line)
{
	int		i;

	if (!line)
		return (NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
		i ++;
	if (!line[i])
		return (NULL);
	if (line[i + 1] == '\0')
		return (NULL);
	return (ft_substr(line, i + 1, ft_strlen(line) - i - 1));
}

char	*freeline(char **line)
{
	free(*line);
	*line = NULL;
	return (NULL);
}

char	*get_next_line(int fd)
{
	char		*next_line;
	char		*temp;
	static char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (freeline(&line));
	if (!line)
	{
		line = malloc(1);
		if (!line)
			return (NULL);
		line[0] = '\0';
	}
	line = get_line(fd, line);
	if (!line)
		return (NULL);
	if (!*line)
		return (freeline(&line));
	next_line = give_line(line);
	if (!next_line)
		return (freeline(&line));
	temp = del_line(line);
	free(line);
	line = temp;
	return (next_line);
}
