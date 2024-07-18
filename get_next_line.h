/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:29:05 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/18 11:26:37 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
//Apenas para Teste, remover
# include <stdio.h>

size_t  len(const char *str);
char    *read_file(int fd, char *text_t);
void    *ft_calloc(size_t size, size_t count);
char    *ft_strjoin(char *s1, char *s2);
char    *ft_strchr_n(char *str);
char    *get_next_line(int fd);

#endif
