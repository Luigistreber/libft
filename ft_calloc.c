/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:56:22 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/05/05 18:59:58 by luigi_streb      ###   ########.fr       */
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
		bzero(memory, mall);
	return (memory);
}
