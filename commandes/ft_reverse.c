/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:34:10 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/10 17:44:01 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_push_swap *ps, int flag)
{
	int	tmp;
	int	i;

	i = ps->size_a - 1;
	if (flag)
		write(1, "rra\n", 4);
	if (ps->size_a > 1)
	{
		tmp = ps->a[ps->size_a - 1];
		while (i > 0)
		{
			ps->a[i] = ps->a[i - 1];
			i--;
		}
		ps->a[0] = tmp;
	}
}

void	rrb(t_push_swap *ps, int flag)
{
	int	tmp;
	int	i;

	i = ps->size_b - 1;
	if (flag)
		write(1, "rrb\n", 4);
	if (ps->size_b > 1)
	{
		tmp = ps->b[ps->size_b - 1];
		while (i > 0)
		{
			ps->b[i] = ps->b[i - 1];
			i--;
		}
		ps->b[0] = tmp;
	}
}

void	rrr(t_push_swap *ps)
{
	write(1, "rrr\n", 4);
	rra(ps, 0);
	rrb(ps, 0);
}
