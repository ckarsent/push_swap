/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:33:54 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/10 15:25:42 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_push_swap *ps)
{
	int	i;

	write(1, "pa\n", 3);
	if (ps->size_b > 0)
	{
		i = ps->size_a;
		while (i > 0)
		{
			ps->a[i] = ps->a[i - 1];
			i--;
		}
		ps->a[0] = ps->b[0];
		i = 0;
		while (i < ps->size_b - 1)
		{
			ps->b[i] = ps->b[i + 1];
			i++;
		}
		ps->size_a++;
		ps->size_b--;
	}
}

void	pb(t_push_swap *ps)
{
	int	i;

	write(1, "pb\n", 3);
	if (ps->size_a > 0)
	{
		i = ps->size_b;
		while (i > 0)
		{
			ps->b[i] = ps->b[i - 1];
			i--;
		}
		ps->b[0] = ps->a[0];
		i = 0;
		while (i < ps->size_a - 1)
		{
			ps->a[i] = ps->a[i + 1];
			i++;
		}
		ps->a[ps->size_a - 1] = 0;
		ps->size_b++;
		ps->size_a--;
	}
}
