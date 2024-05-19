/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:22:30 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/05/12 11:50:51 by luigi_streb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	t;
	ssize_t	i;

	str = (char *)s;
	t = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == t)
		{
			return (&str[i]);
		}
		i--;
	}
	return (NULL);
}

/*{
		if (str[i] != x)
            i++;
		else
			return (&str[i]);
	}*/