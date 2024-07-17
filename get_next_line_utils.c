/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:29:45 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/17 07:57:41 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i++]);
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

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	joined = ft_calloc(sizeof(char), len(s1) + len(s2) + 1);
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		joined[j++] = s1[i++];
	i = 0;
	while (s2[i])
		joined[j++] = s1[i++];
	joined[j] = '\0';
	free(s1);
	return (joined);
}
