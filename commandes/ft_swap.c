/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:34:23 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/05 16:48:47 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_push_swap *ps, int flag)
{
	int	tmp;

	if (flag)
		write(1, "sa\n", 3);
	if (ps->size_a > 1)
	{
		tmp = ps->a[0];
		ps->a[0] = ps->a[1];
		ps->a[1] = tmp;
	}
}

void	sb(t_push_swap *ps, int flag)
{
	int	tmp;

	if (flag)
		write(1, "sb\n", 3);
	if (ps->size_b > 1)
	{
		tmp = ps->b[0];
		ps->b[0] = ps->b[1];
		ps->b[1] = tmp;
	}
}

void	ss(t_push_swap *ps)
{
	write(1, "ss\n", 3);
	sa(ps, 0);
	sb(ps, 0);
}
