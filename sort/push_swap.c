/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_6_500.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:32:02 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/08 17:23:16 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push_swap(t_push_swap *ps, t_point *stru)
{
	if (ps->size_a == 1)
		return (1);
	else if (ps->size_a == 2)
		sort_two(ps);
	else if (ps->size_a == 3)
		sort_three(ps);
	else if (ps->size_a == 4 || ps->size_a == 5)
		four_five(ps);
	else
	{
		sort_by_chunk(ps, *stru);
		insert_b_to_a(ps);
	}
	return (0);
}
