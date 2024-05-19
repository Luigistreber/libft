/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:32:42 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/05/19 22:36:37 by luigi_streb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstbuff;
	size_t	srcbuff;

	srcbuff = ft_strlen(src);
	dstbuff = ft_strlen(dst);
	i = dstbuff;
	j = 0;
	if (dstsize <= dstbuff)
		return (dstsize + srcbuff);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstbuff + srcbuff);
}
