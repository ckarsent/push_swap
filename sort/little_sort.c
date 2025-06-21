/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_2_to_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:27:42 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/08 17:25:12 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_push_swap *ps)
{
	if (ps->a[0] > ps->a[1])
		sa(ps, 1);
}

void	sort_three(t_push_swap *ps)
{
	if (ps->a[0] == ft_min_a(ps))
	{
		if (ps->a[1] > ps->a[2])
		{
			sa(ps, 1);
			ra(ps, 1);
		}
	}
	else if (ps->a[0] == ft_max_a(ps))
	{
		ra(ps, 1);
		if (ps->a[0] > ps->a[1])
			sa(ps, 1);
	}
	else if (ps->a[2] == ft_max_a(ps))
		sa(ps, 1);
	else if (ps->a[2] == ft_min_a(ps))
		rra(ps, 1);
}

void	four_five(t_push_swap *ps)
{
	int	min;

	while (ps->size_a > 3)
	{
		min = find_min_index(ps->a, ps->size_a);
		if (min == 0)
			pb(ps);
		else if (min <= (ps->size_a / 2))
			ra(ps, 1);
		else
			rra(ps, 1);
	}
	sort_three(ps);
	while (ps->size_b > 0)
		pa(ps);
}
