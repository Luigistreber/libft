/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:17:54 by lubravo-          #+#    #+#             */
/*   Updated: 2024/04/28 22:36:10 by luigi_streb      ###   ########.fr       */
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