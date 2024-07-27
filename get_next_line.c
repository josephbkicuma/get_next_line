/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:43:18 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/27 12:58:25 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	**ft_split(char *str)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**p;

	if (!str)
		return (NULL);
	p = ft_calloc(sizeof(char *), 1024);
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		k = 0;
		p[j] = ft_calloc(sizeof(char), 4096);
		while (str[i] != '\0' && str[i] != '\n')
			p[j][k++] = str[i++];
		if (str[i] == '\n')
			p[j][k++] = str[i++];
		p[j++][k] = '\0';
	}
	p[j] = NULL;
	free(str);
	return (p);
}

char	*read_all_file(int fd)
{
	char	*buffer;
	char	*text;
	char	*temp;
	ssize_t	bytes_read;

	buffer = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	text = ft_calloc(sizeof(char), 1);
	if (!text)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(text, buffer);
		free(text);
		text = temp;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	return (text);
}

char	*get_next_line(int fd)
{
	static char	**p;
	static int	read_one_time = 1;
	static int	next_line = 0;
	static int	vet_nulo = 0;

	if (read_one_time)
	{
		p = ft_split(read_all_file(fd));
		read_one_time = 0;
	}
	if (!p[next_line])
	{
		free(p);
		vet_nulo = 1;
	}
	if (vet_nulo)
		return (NULL);
	return (p[next_line++]);
}

/*
int	main(void)
{
	char	*str;
	int	fd;

	fd = open("get_next_line.h", O_RDONLY);
	while ((str = get_next_line(fd)))
	{
		printf("%s", str);
		free(str);
	}
	return (0);
}
*/
