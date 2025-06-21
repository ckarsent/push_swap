/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_chunk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:58:58 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/08 08:40:18 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	chunk(t_push_swap *ps)
{
	if (ps->size_a > 200)
		return (13);
	return (6);
}

int	calculate_intervalle(t_push_swap *ps)
{
	int	nb_chunk;
	int	intervalle;
	int	max;
	int	min;

	nb_chunk = chunk(ps);
	max = ft_max_a(ps);
	min = ft_min_a(ps);
	intervalle = ((max - min) / nb_chunk) + 1;
	return (intervalle);
}

int	*limits(t_push_swap *ps)
{
	int	*limits;
	int	intervalle;
	int	i;
	int	min;
	int	nb_chunk;

	nb_chunk = chunk(ps);
	limits = malloc(sizeof(int) * nb_chunk);
	if (!limits)
		return (NULL);
	intervalle = calculate_intervalle(ps);
	min = ft_min_a(ps);
	i = 0;
	while (i < nb_chunk)
	{
		limits[i] = min + (intervalle * (i + 1)) - 1;
		i++;
	}
	return (limits);
}
