/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:29:45 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/10 16:27:53 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined_str;
	int	len;
	int	count;

	joined_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!joined_str)
		return (NULL);
	len = 0;
	count = 0;
	while (s1[count])
		joined_str[len++] = s1[count++];
	count = 0;
	while (s2[count])
		joined_str[len++] = s2[count++];
	joined_str[len] = '\0';
	return (joined_str);
}

int	ft_strchr(char *str, int c)
{
	while (*str)
		if (*str++ == (char)c)
			return (1);
	return (0);
}
