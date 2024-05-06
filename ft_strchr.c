/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:21:10 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/05/03 13:14:36 by luigi_streb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	x;
	size_t	i;

	str = (char *)s;
	x = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] != x)
			i++;
		else
			return (&str[i]);
	}
	if (str[i] == x)
		return (&str[i]);
	return (NULL);
}
