/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:07:58 by ckarsent          #+#    #+#             */
/*   Updated: 2025/02/09 08:33:32 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_push_swap
{
	int	*a;
	int	size_a;
	int	*b;
	int	size_b;
}	t_push_swap;

typedef struct s_point
{
	int	nb_chunk;
	int	i;
	int	j;
	int	first;
	int	last;
}	t_point;

void	sort_two(t_push_swap *ps);
void	sort_three(t_push_swap *ps);
void	four_five(t_push_swap *ps);

int		ft_min_a(t_push_swap *ps);
int		ft_min_b(t_push_swap *ps);
int		ft_max_a(t_push_swap *ps);
int		ft_max_b(t_push_swap *ps);
int		find_min_index(int *stack, int size);
int		find_max_index(int *stack, int size);

int		chunk(t_push_swap *ps);
int		calculate_intervalle(t_push_swap *ps);
int		*limits(t_push_swap *ps);
int		opti(t_push_swap *ps, int limite);
void	ft_first(t_push_swap *ps, int first);
void	ft_last(t_push_swap *ps, int last);
void	ft_pb(t_push_swap *ps);
void	find_positions(t_push_swap *ps, t_point *stru, int lim);
void	push_chunk_to_b(t_push_swap *ps, t_point *stru, int lim);
void	sort_by_chunk(t_push_swap *ps, t_point stru);
void	insert_b_to_a(t_push_swap *ps);

int		push_swap(t_push_swap *ps, t_point *stru);

/*void	print_array(int *arr, int size, char *s);*/
char	**error_free(char **str, int k);
int		*error_free_int(char **str, int k);
int		main(int argc, char **argv);

void	pa(t_push_swap *ps);
void	pb(t_push_swap *ps);
void	sa(t_push_swap *ps, int flag);
void	sb(t_push_swap *ps, int flag);
void	ss(t_push_swap *ps);
void	ra(t_push_swap *ps, int flag);
void	rb(t_push_swap *ps, int flag);
void	rr(t_push_swap *ps);
void	rra(t_push_swap *ps, int flag);
void	rrb(t_push_swap *ps, int flag);
void	rrr(t_push_swap *ps);

int		is_valid(char *s);
int		min_max(char *str);
int		doublons(int *nb, int size);
int		debut_valide_et_chiffres(char *s);
int		count_argv(char *str);
int		*final_tab(int argc, char **argv);
long	ft_atol(char *nptr);
int		ft_size(int argc, char **argv);
int		ft_isdigit(int c);
int		ft_atoi(const char *nptr);
char	*ft_strdup(const char *s);
char	**ft_split(char const *s, char c);

#endif
