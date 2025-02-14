/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:21:38 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/07 14:58:00 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min_index(int *stack, int size)
{
	int	i;
	int	min;

	i = 1;
	min = 0;
	while (i < size)
	{
		if (stack[i] < stack[min])
			min = i;
		i++;
	}
	return (min);
}

int	find_max_index(int *stack, int size)
{
	int	i;
	int	max;

	i = 1;
	max = 0;
	while (i < size)
	{
		if (stack[i] > stack[max])
			max = i;
		i++;
	}
	return (max);
}
