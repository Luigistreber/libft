/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:48:15 by lubravo-          #+#    #+#             */
/*   Updated: 2024/05/23 11:48:20 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned const char	*entry;

	dest = (unsigned char *)dst;
	entry = (unsigned const char *)src;
	if (!dest && !entry)
		return (NULL);
	if ((size_t)dest > (size_t)entry)
	{
		while (len)
		{
			len --;
			dest[len] = entry[len];
		}
	}
	else
		ft_memcpy(dest, entry, len);
	return (dst);
}
	/*size_t				buffer;
	buffer = ft_strlen(dst);
	if (len > buffer)
		return (0);
	if (len == 0)
	return (dest);
	
	 && len <= (size_t)dest - (size_t)entry
	estas condicionales no me han funcionado para la replica*/