/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:24:13 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/11 10:46:08 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*read_file(int fd)
{
	char	*text;
	char	*buffer;
	char	*temp;
	int		bytes_read;

	text = ft_calloc(sizeof(char), 1);
	buffer = ft_calloc(1, BUFFER_SIZE + 1);
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(text, buffer);
		free(text);
		text = temp;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	if (bytes_read < 0)
		return NULL;
	return (text);
}

int	main(void)
{
	char	*str;
	int		fd;
	
	fd = open("file", O_RDONLY);
	str = read_file(fd);
	printf("%s\n", str);
	free(str);
	str = read_file(fd);
	printf("%s\n", str);
	free(str);
	str = read_file(fd);
	printf("%s\n", str);
	free(str);
}
