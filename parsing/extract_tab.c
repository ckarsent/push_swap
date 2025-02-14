/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:03:48 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/10 17:55:55 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**parse(int argc, char **argv)
{
	int		i;
	char	**tab;

	i = 0;
	if (argc == 1)
		return (NULL);
	if (argc == 2)
		return (ft_split(argv[1], ' '));
	tab = malloc(sizeof(char *) * argc);
	if (!tab)
		return (NULL);
	while (i < argc - 1)
	{
		tab[i] = ft_strdup(argv[i + 1]);
		if (!tab[i])
			return (error_free(tab, i));
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

int	parse_valid(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_valid(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_size(int argc, char **argv)
{
	if (argc == 2)
		return (count_argv(argv[1]));
	return (argc - 1);
}

int	*final_tab(int argc, char **argv)
{
	int		i;
	int		len;
	char	**tab;
	int		*stack;

	i = -1;
	len = ft_size(argc, argv);
	tab = parse(argc, argv);
	if (!tab || !parse_valid(tab))
	{
		error_free_int(tab, len);
		return (0);
	}
	stack = malloc(sizeof(int) * len);
	if (!stack)
		return (error_free_int(tab, len));
	while (++i < len)
		stack[i] = ft_atoi(tab[i]);
	if (doublons(stack, len) == 1)
	{
		free(stack);
		return (error_free_int(tab, len));
	}
	error_free(tab, len);
	return (stack);
}
