/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:44:23 by lubravo-          #+#    #+#             */
/*   Updated: 2024/05/23 11:44:52 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	mall;
	unsigned char	*memory;

	mall = (count * size);
	memory = malloc(mall);
	if (!memory)
		return (NULL);
	if (memory)
		ft_bzero(memory, mall);
	return (memory);
}
