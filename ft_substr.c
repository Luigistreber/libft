/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:28:26 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/05/06 17:05:19 by luigi_streb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	sbuff;

	if (!s)
		return (NULL);
	sbuff = ft_strlen(s);
	if ((size_t)start >= sbuff)
		return (ft_strdup(""));
	if (len == 0)
	{
		str = malloc(1);
		str[len] = '\0';
		return (str);
	}
	if (len > sbuff - start)
		len = sbuff - start;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	else
	{
		ft_memcpy(str, s + start, len);
		str[len] = '\0';
	}
	return (str);
}
