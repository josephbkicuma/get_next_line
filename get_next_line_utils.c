/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:29:45 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/18 10:04:53 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t size, size_t count)
{
	void	*ptr;
	char	*str;

	ptr = malloc(size * count);
	str = ptr;
	while (count--)
		str[count] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	joined = malloc(sizeof(char) * (len(s1) + len(s2) + 1));
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		joined[j++] = s1[i++];
	i = 0;
	while (s2[i])
		joined[j++] = s2[i++];
	joined[j] = '\0';
	free(s1);
	return (joined);
}
char	*ft_strchr_n(char *str)
{
	size_t	i;
	char	*temp;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			temp = &str[++i];
			str = temp;
			return (str);
		}
		i++;
	}
	return (NULL);
}
