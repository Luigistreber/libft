/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:41:13 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/05/19 23:30:03 by luigi_streb      ###   ########.fr       */
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

static void	ft_free_words(char **strings)
{
	size_t	i;

	i = 0;
	while (strings[i])
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
			ft_free_words(strings);
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
	ft_new_words(strings, (char *)s, c);
	return (strings);
}
/*static int	ft_counterwords(char *s, char c)
{
	int		count;
	size_t	i;
	size_t	j;

	count = 0;
	i = 0;
	while (i < strlen(s))
	{
		while (i < ft_strlen(s))
		{
			if (ft_strchr(&c, s[i]) == NULL)
				break ;
			i++;
		}
		j = i;
		while (i < strlen(s))
		{
			if ((ft_strchr(&c, s[i]) != NULL))
				break ;
			i++;
		}
		if (i > j)
			count++;
	}
	return (count);
}*/