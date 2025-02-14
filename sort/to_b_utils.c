/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_b_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:59:51 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/07 15:00:15 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_first(t_push_swap *ps, int first)
{
	while (first > 0)
	{
		ra(ps, 1);
		first--;
	}
}

void	ft_last(t_push_swap *ps, int last)
{
	while (last < ps->size_a)
	{
		rra(ps, 1);
		last++;
	}
}

void	ft_pb(t_push_swap *ps)
{
	while (ps->size_a > 0)
		pb(ps);
}
