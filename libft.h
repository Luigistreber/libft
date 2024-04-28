/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:53:55 by lubravo-          #+#    #+#             */
/*   Updated: 2024/04/28 23:02:03 by luigi_streb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>

//PARA COMPILAR
//make && gcc -o main main.c -L. -lft && ./main
//libftTester (https://github.com/Tripouille/libftTester)
int		ft_isalnum(unsigned char alnum);
void	ft_bzero(void *s, size_t n);
int		ft_isalpha(char alpha);
int		ft_isascii(unsigned char asc);
int		ft_isdigit(int digit);
int		ft_isprint(unsigned char pri);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
#endif