/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:24:13 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/18 10:25:38 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *text)
{
	int		bytes_read;
	char	*buffer;
	//char	*text;

	buffer = ft_calloc(1, BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (!text)
		text = ft_calloc(1, 1);
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		text = ft_strjoin(text, buffer);
	}
	free(buffer);
	return (text);
}

char	*get_line(char *text)
{
	char	*line;
	size_t	i;
	
	if (!text)
		return (NULL);
	i = 0;
	while (text[i] && text[i] != '\n')
		i++;
	line = ft_calloc(sizeof(char), i + 2);
	i = 0;
	while (text[i] && text[i] != '\n')
	{
		line[i] = text[i];
		i++;
		if (text[i] == '\n')
			line[i] = text[i];
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*text = {0};
	char		*line;
	
	if (!text)
		text = read_file(fd, text);
	else
	{
		line = get_line(text);
		text = ft_strchr_n(text);
	}
	return (line);
}

int	main(void)
{
	//char	*str;

	/*str = get_line("Joseph   \nKicuma");
	printf("%s", str);
	free(str);*/
	int	fd = open("file", O_RDONLY);
	for (int i = 0; i < 1; i++)
		printf("%s\n\n\n\n", get_next_line(fd));
	/*str = ft_calloc(1, 1);
	str = ft_strjoin(str, "Joseph");
	str = ft_strjoin(str, " Kicuma");*/
	/*printf("%s", str);
	free(str);*/
	/*str = ft_strchr_n("JosephKicuma");
	if (!str)
		return (0);
	printf("%s\n", str); */
}