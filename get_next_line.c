/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kicuma <kicuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:24:13 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/25 13:50:51 by kicuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd)
{
	char	*text;
	char	*buffer;
	ssize_t	bytes_read;
	
	buffer = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	text = ft_calloc(1, 1);
	if (!text)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		text = ft_strjoin(text, buffer);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	if (text[0] == '\0' || !text)
	{
		free(text);
		return (NULL);
	}
	return (text);
}

char	*get_line(char *text)
{
	size_t	i;
	char	*line;
	
	if (!text || text[0] == '\0')
	{
		free(text);
		return (NULL);
	}
	i = 0;
	while (text[i] && text[i] != '\n')
		i++;
	line = ft_calloc(sizeof(char), i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (text[i] && text[i] != '\n')
	{
		line[i] = text[i];
		i++;
	}
	if (text[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*text = {0};
	char		*line;
	
	if (!text || text[0] == '\0')
		text = read_file(fd);
	line = get_line(text);
	text = ft_strchr_n(text);
	return (line);
}
/*
int	main(void)
{
	char	*str;
	int		fd;

	fd = open("file", O_RDONLY);
	str = get_next_line(fd);
	while (str)
	{
		printf("%s", str);
		free (str);
		str = get_next_line(fd);
	}
	free(str);
	return (0);
}
*/
