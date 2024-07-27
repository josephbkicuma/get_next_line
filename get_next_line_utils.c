/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:43:36 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/27 13:03:14 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t size, size_t count)
{
	unsigned char	*ptr;
	void			*result;
	size_t			i;

	result = malloc(size * count);
	if (!result)
		return (NULL);
	i = 0;
	ptr = result;
	while (i++ < count)
		*ptr++ = 0;
	return (result);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	char	*temp;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i++])
		i++;
	while (s2[j])
		j++;
	result = ft_calloc(sizeof(char), i + j + 1);
	temp = result;
	while (*s1)
		*result++ = *s1++;
	while (*s2)
		*result++ = *s2++;
	*result = '\0';
	return (temp);
}
