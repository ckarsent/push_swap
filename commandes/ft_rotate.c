/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:34:17 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/10 11:14:36 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_push_swap *ps, int flag)
{
	int	i;
	int	tmp;

	i = 0;
	if (flag)
		write(1, "ra\n", 3);
	if (ps->size_a > 1)
	{
		tmp = ps->a[0];
		while (i < ps->size_a - 1)
		{
			ps->a[i] = ps->a[i + 1];
			i++;
		}
		ps->a[ps->size_a - 1] = tmp;
	}
}

void	rb(t_push_swap *ps, int flag)
{
	int	i;
	int	tmp;

	i = 0;
	if (flag)
		write(1, "rb\n", 3);
	if (ps->size_b > 1)
	{
		tmp = ps->b[0];
		while (i < ps->size_b - 1)
		{
			ps->b[i] = ps->b[i + 1];
			i++;
		}
		ps->b[ps->size_b - 1] = tmp;
	}
}

void	rr(t_push_swap *ps)
{
	write(1, "rr\n", 3);
	ra(ps, 0);
	rb(ps, 0);
}
