/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_b.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:21:39 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/10 15:22:09 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	opti(t_push_swap *ps, int limite)
{
	int	i;
	int	first;
	int	last;

	i = 0;
	while (i < ps->size_a && ps->a[i] > limite)
		i++;
	if (i == ps->size_a)
		return (-1);
	first = i;
	i = ps->size_a - 1;
	while (i >= 0 && ps->a[i] > limite)
		i--;
	last = i;
	if (first > ps->size_a - last)
		return (0);
	return (1);
}

void	find_positions(t_push_swap *ps, t_point *stru, int lim)
{
	stru->i = 0;
	while (stru->i < ps->size_a && ps->a[stru->i] > lim)
		stru->i++;
	stru->first = stru->i;
	stru->i = ps->size_a - 1;
	while (stru->i >= 0 && ps->a[stru->i] > lim)
		stru->i--;
	stru->last = stru->i;
}

void	push_chunk_to_b(t_push_swap *ps, t_point *stru, int lim)
{
	int	opt;

	while (1)
	{
		find_positions(ps, stru, lim);
		opt = opti(ps, lim);
		if (opt == -1)
			break ;
		else if (opt == 1)
			ft_first(ps, stru->first);
		else
			ft_last(ps, stru->last);
		pb(ps);
	}
}

void	sort_by_chunk(t_push_swap *ps, t_point stru)
{
	int	*lim;

	lim = limits(ps);
	if (!lim)
		return ;
	stru.nb_chunk = chunk(ps);
	stru.j = 0;
	while (stru.j < stru.nb_chunk)
	{
		push_chunk_to_b(ps, &stru, lim[stru.j]);
		stru.j++;
	}
	ft_pb(ps);
	free(lim);
}
