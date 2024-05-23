/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:49:17 by lubravo-          #+#    #+#             */
/*   Updated: 2024/05/23 15:41:23 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counterwords(char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**ft_memdinamic(int wordsnum)
{
	char	**strings;

	strings = (char **)malloc((sizeof(char *)) * (wordsnum + 1));
	if (!strings)
	{
		return (NULL);
	}
	strings[wordsnum] = NULL;
	return (strings);
}

static void	ft_free_words(char **strings, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index && strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}

static char	**ft_new_words(char **strings, char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		strings[index] = ft_substr(s, start, i - start);
		if (!strings[index])
		{
			ft_free_words(strings, index);
			return (NULL);
		}
		index++;
	}
	strings[index] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**strings;

	if (!s)
		return (NULL);
	word_count = ft_counterwords((char *)s, c);
	strings = ft_memdinamic(word_count);
	if (!strings)
		return (NULL);
	if (!ft_new_words(strings, (char *)s, c))
		return (NULL);
	return (strings);
}
