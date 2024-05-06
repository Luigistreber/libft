/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:31:07 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/05/06 12:27:17 by luigi_streb      ###   ########.fr       */
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
