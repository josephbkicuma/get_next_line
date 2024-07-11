/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:29:45 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/11 10:39:29 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t size, size_t count)
{
	void	*str;
	size_t	i;
	char	*s;

	str = malloc(size * count);
	if (!str)
		return (NULL);
	i = 0;
	s = str;
	while (count--)
		s[count] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined;
	int		i;
	int		j;
	
	j = i = 0;
	while (s1[i++]);
	while (s2[j++]);
	joined = ft_calloc(sizeof(char), i + j + 1);
	if (!joined)
		return (NULL);
	j = i = 0;
	while (s1[i])
		joined[j++] = s1[i++];
	i = 0;
	while (s2[i])
		joined[j++] = s2[i++];
	joined[j] = 0;
	return (joined);
}

int	ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		if (str[i++] == (char)c)
			return (1);
	return (0);
}