/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:24:13 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/09 15:38:50 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

static char *str_join(char *s1, char *s2)
{
    char *joined;
    size_t len1 = s1 ? strlen(s1) : 0;
    size_t len2 = s2 ? strlen(s2) : 0;

    joined = malloc(len1 + len2 + 1);
    if (!joined)
        return NULL;
    if (s1)
        strcpy(joined, s1);
    if (s2)
        strcpy(joined + len1, s2);
    return joined;
}

/*
char *read_file(int fd)
{
	ssize_t	buffer_read;
	char	*buffer;
	char	*text_read;
	char	*temp;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return NULL;
	text_read = NULL;

	buffer_read = read(fd, buffer, BUFFER_SIZE);
	while (buffer_read > 0)
	{
		buffer[buffer_read] = '\0';
		temp = str_join(text_read, buffer);
		free(text_read);
		if (!temp)
		{
			free(buffer);
			return NULL;
		}
		text_read = temp;
		buffer_read = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	return text_read;
}
*/

char	*read_file(int fd)
{
	char	*buffer;
	char	*text_read;
	ssize_t	buffer_read;

	buffer_read = 1;
	buffer = malloc(BUFFER_SIZE + 1);
	text_read = NULL;
	while (buffer_read)
	{
		buffer_read = read(fd, buffer, BUFFER_SIZE);
		text_read = str_join(text_read, buffer);
	}
	return text_read;
}

int	main(int ac, char **av)
{
	char	*str = read_file(open(av[1], O_RDONLY));
	printf("%s", str);
}
