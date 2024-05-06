/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:32:42 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/05/05 16:21:23 by luigi_streb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstbuff;

	i = 0;
	dstbuff = ft_strlen(dst);
	if (src[i] && i < ((dstsize - dstbuff) - 1))
		return (dst[i] + src[i]);
	return (0);
}


/*
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcbuff;

	i = 0;
	srcbuff = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcbuff);
}
strlcat() agrega la cadena src al final de dst.
      Agregará como máximo dstsize - strlen(dst) -
      1 caracteres
*/