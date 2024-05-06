/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:24:11 by lubravo-          #+#    #+#             */
/*   Updated: 2024/05/06 16:25:39 by luigi_streb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	/*const char		*str1 = "hola";
	unsigned int	i;
	size_t			n;
	
	//char			*result2;*/
	char			*result1;


	result1 = ft_substr("42", 0, 0);
	//result2 = substr(str1, i, n);
	printf("ft_substr = %s \n", result1);
	//printf("substr = %s \n", result2);
	return (0);
}
