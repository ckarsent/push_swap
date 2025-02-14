/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:03:59 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/08 20:11:48 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atol(char *nptr)
{
	int		i;
	int		cmpt;
	long	nb;

	i = 0;
	cmpt = 1;
	nb = 0;
	while (nptr[i] && ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			cmpt = -1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	if (nptr[i] != '\0')
		return (0);
	return (nb * cmpt);
}

int	count_argv(char *str)
{
	int	i;
	int	cmpt;

	i = 0;
	cmpt = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] != ' ' && str[i])
		{
			cmpt++;
			while (str[i] != ' ' && str[i])
				i++;
		}
	}
	return (cmpt);
}

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	cmpt;
	int	nb;

	i = 0;
	cmpt = 0;
	nb = 0;
	while (nptr[i] && ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			cmpt = 1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	if (cmpt == 1)
		return (-nb);
	return (nb);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i])
		i++;
	dest = malloc(sizeof(char) * i + 1);
	if (!dest)
		return (0);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
