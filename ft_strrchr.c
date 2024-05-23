/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:50:55 by lubravo-          #+#    #+#             */
/*   Updated: 2024/05/23 11:51:01 by lubravo-         ###   ########.fr       */
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