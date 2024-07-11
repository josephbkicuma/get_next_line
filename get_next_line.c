/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:24:13 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/11 12:00:02 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*read_file(int fd, char *text_read)
{
	char	*buffer;
	char	*temp;
	int		bytes_read;

	text_read = ft_calloc(sizeof(char), 1);
	buffer = ft_calloc(1, BUFFER_SIZE + 1);
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(text_read, buffer);
		free(text_read);
		text_read = temp;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	if (bytes_read < 0)
		return NULL;
	return (text_read);
}

/*char	*get_rest_text(char *text)
{
	while (*text && *text !=  '\n')
		text++;
	if (*text == '\n')
		text++;
	return (&*text);
}

char	*get_line(char *text)
{
	int		i;
	char	*line;
	
	i = 0;
	while (text[i] && text[i] != '\n')
		i++;
	line = ft_calloc(sizeof(char), i + 1);
	i = 0;
	while (text[i] && text[i] != '\n')
	{
		line[i] = text[i];
		i++;
	}
	line[i++] = '\n';
	line[i] = '\0';
	return (line);
}
*/
char	*get_next_line(int fd)
{
	static char	*text = {0};
	char		*line;

	text = read_file(fd, text);
	return (text);
}

int	main(void)
{
	char	*str;
	int		fd;
	
	fd = open("file", O_RDONLY);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd);
	printf("--%s", str);
	free(str);
	str = get_next_line(fd);
	printf("--%s", str);
	free(str);
}
