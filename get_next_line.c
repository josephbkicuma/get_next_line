/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:24:13 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/10 16:38:32 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

/*static char *str_join(char *s1, char *s2)
{
	char	*joined;
	size_t	len1;
	size_t	len2;
	char	*buffer;
	int		bytes_read;
	char	*buffer;
	int		bytes_read;
	int		bytes_read;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;
	joined = malloc(len1 + len2 + 1);
	if (!joined)
		return (NULL);
	if (s1)
		strcpy(joined, s1);
	if (s2)
		strcpy(joined + len1, s2);
	return (joined);
}*/
void	read_file(int fd)
{
	int		bytes_read;
	char	*buffer;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		printf("%s", buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
}

int	main(int ac, char **av)
{
	char	*str;
	int		fd;
	
	fd = open("get_next_line_utils.c", O_RDONLY);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	/*read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);
	read_file(fd);*/
}
