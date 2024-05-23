/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:51:12 by lubravo-          #+#    #+#             */
/*   Updated: 2024/05/23 13:29:21 by lubravo-         ###   ########.fr       */
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
		return (ft_strdup(""));
	}
	if (len > sbuff - start)
		len = sbuff - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	else
	{
		ft_memcpy(str, s + start, len);
		str[len] = '\0';
	}
	return (str);
}
