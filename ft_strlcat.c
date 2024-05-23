/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:50:01 by lubravo-          #+#    #+#             */
/*   Updated: 2024/05/23 11:50:10 by lubravo-         ###   ########.fr       */
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
