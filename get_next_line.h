/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kicuma <kicuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:29:05 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/25 11:49:46 by kicuma           ###   ########.fr       */
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
# include <string.h>

size_t  len(const char *str);
void    *ft_calloc(size_t size, size_t count);
char    *ft_strjoin(char *s1, char *s2);
char    *read_file(int fd);
char    *get_line(char *text);
char    *get_next_line(int fd);
char    *ft_strchr_n(char *text);

#endif
