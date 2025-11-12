/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafu <yafu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:02:43 by pfff              #+#    #+#             */
/*   Updated: 2025/11/07 13:10:32 by yafu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <limits.h>

#ifndef OPEN_MAX
# define OPEN_MAX 10240
#endif
/*
@brief:read, copy from buf to line 
@param: int fd, line
@return: line
*/
static char	*get_line(int fd, char **line)
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
			return (free (buf), free(line[fd]), NULL);
		if (n >= 0)
			buf[n] = '\0';
		line[fd] = ft_strjoin(line[fd], buf);
		if (!line[fd])
			return (free (buf), NULL);
		if (ft_strchr(line[fd], '\n'))
			break ;
	}
	free(buf);
	return (line[fd]);
}

/*
@: extract the line 
@: line
@: result
*/
static char	*give_line(char *line)
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

static char	*del_line(char *line)
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
	if (line && *line)
	{
		free(*line);
		*line = NULL;
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	char		*next_line;
	char		*temp;
	static char	*line[OPEN_MAX];

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	else if (!line[fd])
	{
		line[fd] = malloc(1);
		if (!line[fd])
			return (NULL);
		line[fd][0] = '\0';
	}
	line[fd] = get_line(fd, line);
	if (!line[fd])
		return (NULL);
	if (!*line[fd])
		return (freeline(&line[fd]));
	next_line = give_line(line[fd]);
	if (!next_line)
		return (freeline(&line[fd]));
	temp = del_line(line[fd]);
	free(line[fd]);
	line[fd] = temp;
	return (next_line);
}

// #include <fcntl.h>
// #include <stdio.h>
// #include <limits.h>
// static void runfile(const char *set)
// {
// 	int fd = open(set, O_RDONLY, 0);
// 	set = get_next_line(fd);	
// 	// while((set = get_next_line(fd)))
// 	//{
// 	printf("\n");
// 	printf("%s", set);	
// 	 	free((void*)set);
// 	//}
// 	close(fd);
// }
// int main()
// {
// 	int fd = open("normal.txt", O_RDONLY, 0);
// 	char *set = get_next_line_bonus(fd);
// 	// set = get_next_line_bonus(fd);
// 	printf("%s", set);
// 	free((void*)set);
// 	int fd2 = open("bigline.txt", O_RDONLY, 0);
// 	char *set2 = get_next_line_bonus(fd2);
// 	// set2 = get_next_line_bonus(fd2);
// 	printf("%s", set2);
// 	free((void*)set2);
// 	close(fd);
// 	close(fd2);
// 	runfile("empty.txt");
// 	printf("------");
// 	runfile("n.txt");
// 	printf("------");
// 	runfile("normal.txt");
// 	printf("------");
// 	runfile("abc.txt");
// 	printf("------");
// 	runfile("bigline.txt");
// 	printf("------");
// 	runfile("bin.txt");
// 	printf("------");
// 	return 0;
// }