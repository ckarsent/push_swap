/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:03:55 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/08 23:10:47 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*sans_plus(char *s)
{
	if (!s)
		return (NULL);
	if (s[0] == '+' && ft_isdigit(s[1]))
		return (ft_strdup(s + 1));
	return (ft_strdup(s));
}

int	min_max(char *str)
{
	long	num;

	num = ft_atol(str);
	if (num < INT_MIN || num > INT_MAX)
		return (0);
	return (1);
}

int	doublons(int *nb, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (nb[i] == nb[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	debut_valide_et_chiffres(char *s)
{
	int	i;

	i = 0;
	if (!ft_isdigit(s[0]) && !(s[0] == '-' && ft_isdigit(s[1])))
		return (0);
	if (s[i] == '-')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_valid(char *s)
{
	char	*c;

	c = sans_plus(s);
	if (!c)
		return (0);
	if (!debut_valide_et_chiffres(c) || !min_max(c))
	{
		free(c);
		return (0);
	}
	free(c);
	return (1);
}
