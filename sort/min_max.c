/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:57:30 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/08 08:44:40 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_min_a(t_push_swap *ps)
{
	int	i;
	int	min;

	i = 0;
	min = ps->a[i];
	while (i < ps->size_a)
	{
		if (min > ps->a[i])
			min = ps->a[i];
		i++;
	}
	return (min);
}

int	ft_min_b(t_push_swap *ps)
{
	int	i;
	int	min;

	i = 0;
	min = ps->b[i];
	while (i < ps->size_b)
	{
		if (min > ps->b[i])
			min = ps->b[i];
		i++;
	}
	return (min);
}

int	ft_max_a(t_push_swap *ps)
{
	int	i;
	int	max;

	i = 0;
	max = ps->a[i];
	while (i < ps->size_a)
	{
		if (max < ps->a[i])
			max = ps->a[i];
		i++;
	}
	return (max);
}

int	ft_max_b(t_push_swap *ps)
{
	int	i;
	int	max;

	i = 0;
	max = ps->b[i];
	while (i < ps->size_b)
	{
		if (max < ps->b[i])
			max = ps->b[i];
		i++;
	}
	return (max);
}
