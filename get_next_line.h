/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:29:05 by jquicuma          #+#    #+#             */
/*   Updated: 2024/07/11 11:30:37 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 7
# endif

# include <stdlib.h>
# include <unistd.h>
/* Bibliotecas importadas para testes */
# include <fcntl.h>
# include <stdio.h>
# include <string.h>

int     ft_strchr(char *str, int c);
void    *ft_calloc(size_t size, size_t count);
char    *ft_strjoin(char *s1, char *s2);

#endif
