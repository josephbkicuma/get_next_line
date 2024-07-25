/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kicuma <kicuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:29:45 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/25 13:51:34 by kicuma           ###   ########.fr       */
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
	char	*str;

	str = malloc(size * count);
	if (!str)
		return (NULL);
	while (count--)
		str[count] = 0;
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
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
		joined[j++] = s2[i++];
	free(s1);
	return (joined);
}
char	*ft_strchr_n(char *text)
{
	size_t	i;
	char	*temp;
	
	i = 0;
	if (!text)
	{
		free (text);
		return (NULL);
	}
	while (text[i] && text[i] != '\n')
		i++;
	if (text[i] == '\n')
		i++;
	if (i > 0)
	{
		temp = ft_calloc(1, 1);
		temp = ft_strjoin(temp, &text[i]);
		free(text);
		text = temp;
		return (text);
	}
	else
		return (NULL);
}

