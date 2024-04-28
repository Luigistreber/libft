/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:10:51 by lubravo-          #+#    #+#             */
/*   Updated: 2024/04/24 20:18:28 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*x_dst;
	const unsigned char		*x_src;
	size_t					i;

	x_dst = (unsigned char *) dst;
	x_src = (const unsigned char *) src;
	i = 0;
	if (!x_dst && !x_src)
		return (0);
	while (i < n)
	{
		x_dst[i] = x_src[i];
		i++;
	}
	return (dst);
}
	//size_t					buffer;
	/*buffer = ft_strlen(dst);
	if (n > buffer)
		return (0);*/
