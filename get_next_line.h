/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:29:53 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/27 12:15:15 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

void	*ft_calloc(size_t size, size_t count);
char	*read_all_file(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char *str);
char	*get_next_line(int fd);

#endif
