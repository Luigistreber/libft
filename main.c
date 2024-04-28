/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:24:11 by lubravo-          #+#    #+#             */
/*   Updated: 2024/04/28 21:33:54 by luigi_streb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	i;

	i = -1;
	while (i < 530)
	{
		if (!!ft_isascii(i) != !!isascii(i))
		{
			printf("ESTO ESTA MAL\n");
		}
		i++;
	}
	printf("GOOD");
}
