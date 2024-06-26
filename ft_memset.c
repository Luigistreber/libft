/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:48:30 by lubravo-          #+#    #+#             */
/*   Updated: 2024/05/23 11:48:35 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	val;
	unsigned int	i;

	ptr = (unsigned char *)b;
	val = (unsigned char)c;
	i = 0;
	if (len <= 0)
		return (b);
	while (i < len)
	{
		ptr[i] = val;
		i++;
	}
	return (b);
}

	/*size_t			buffer;
	buffer = ft_strlen(b);
	buffer = ft_strlen(b);*/