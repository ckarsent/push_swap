/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_free_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:22:42 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/10 17:54:01 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**error_free(char **str, int k)
{
	while (k--)
		free(str[k]);
	free(str);
	return (NULL);
}

int	*error_free_int(char **str, int k)
{
	while (k--)
		free(str[k]);
	free(str);
	return (0);
}

int	is_sorted(int *stack, int size)
{
	int	i;

	i = 0;
	if (!stack || size <= 1)
		return (1);
	while (i < size - 1)
	{
		if (stack[i] > stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_push_swap	ps;
	t_point		stru;

	stru = (t_point){0};
	if (argc > 1)
	{
		ps.a = final_tab(argc, argv);
		ps.size_a = ft_size(argc, argv);
		ps.b = malloc(sizeof(int) * ps.size_a);
		ps.size_b = 0;
		if (!ps.a || !ps.b || (ps.size_a == 0 && argc == 2))
		{
			write(2, "Error\n", 6);
			free(ps.a);
			free(ps.b);
			return (0);
		}
		while (!is_sorted(ps.a, ps.size_a))
			push_swap(&ps, &stru);
		free(ps.a);
		free(ps.b);
	}
	return (0);
}

/*
void	print_array(int *arr, int size, char *s)
{
	int	i;

	i = 0;
	ft_printf("%s{", s);
	while (i < size)
	{
		ft_printf("%d", arr[i]);
		if (i != size - 1)
			ft_printf(", ");
		i++;
	}
	ft_printf("}\n");
	print_array(ps.a, ps.size_a, "stack avant :");
	print_array(ps.a, ps.size_a, "stack après :");
}
*/
