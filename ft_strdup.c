/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:49:34 by lubravo-          #+#    #+#             */
/*   Updated: 2024/05/23 11:49:39 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		sizes1;

	sizes1 = ft_strlen(s1) + 1;
	s2 = malloc(sizes1);
	if (!s2)
		return (NULL);
	if (s2)
		ft_memcpy(s2, s1, sizes1);
	return (s2);
}
