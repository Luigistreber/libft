/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:46:06 by lubravo-          #+#    #+#             */
/*   Updated: 2024/05/23 11:46:12 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_size(int n)
{
	size_t		len;
	int long	num;

	len = 0;
	num = (int long)n;
	if (num <= 0)
	{
		len++;
		num = -num;
	}
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static char	*ft_procedures_itoa(int n, size_t len)
{
	char		*str;
	int long	num;	

	str = (char *)malloc(len + 1);
	num = (int long)n;
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (num < 0)
		num = -num;
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;

	len = ft_num_size(n);
	return (ft_procedures_itoa(n, len));
}
