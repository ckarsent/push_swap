/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:16:44 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/10 17:54:31 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	find;
	int	count;

	i = 0;
	find = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && find == 0)
		{
			find = 1;
			count++;
		}
		else if (s[i] == c)
			find = 0;
		i++;
	}
	return (count);
}

static int	ft_2strlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*little_split(char const *s, int len)
{
	char	*st;
	int		i;

	i = 0;
	st = malloc(sizeof(char) * (len + 1));
	if (!st)
		return (NULL);
	while (i < len)
	{
		st[i] = s[i];
		i++;
	}
	st[i] = '\0';
	return (st);
}

char	**error_free2(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		words;
	int		j;
	int		len;

	words = count_words(s, c);
	str = malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (*s && j < words)
	{
		if (*s != c)
		{
			len = ft_2strlen(s, c);
			str[j] = little_split(s, len);
			if (!str[j])
				return (error_free2(str));
			s += len;
			j++;
		}
		s++;
	}
	str[j] = (NULL);
	return (str);
}
