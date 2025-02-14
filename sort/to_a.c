/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:45:44 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/08 16:44:16 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	insert_b_to_a(t_push_swap *ps)
{
	int	i;

	while (ps->size_b > 0)
	{
		i = find_max_index(ps->b, ps->size_b);
		if (i <= (ps->size_b / 2))
		{
			while (i--)
				rb(ps, 1);
		}
		else
		{
			i = ps->size_b - i;
			while (i--)
				rrb(ps, 1);
		}
		pa(ps);
	}
}
