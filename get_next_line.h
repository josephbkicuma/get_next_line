/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:29:05 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/18 08:06:03 by jquicuma         ###   ########.fr       */
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
//Apenas para Teste, remover
# include <stdio.h>

size_t  len(const char *str);
char    *ft_strjoin(const char *s1, const char *s2)
char    *read_file(int fd);
void    *ft_calloc(size_t size, size_t count);

#endif
