/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojinjang <hojinjang@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 07:43:03 by sesim             #+#    #+#             */
/*   Updated: 2022/07/25 20:38:02 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_node
{
	int				val;
	int				idx;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	int		size;
}	t_stack;

typedef struct s_info
{
	t_stack	*stack_a;
	t_stack	*stack_b;
}	t_info;

t_node	*pop_head(t_stack *stack);
t_node	*pop_tail(t_stack *stack);
void	push_head(t_stack *stack, t_node *node);
void	push_tail(t_stack *stack, t_node *node);
void	pa(t_info info);
void	pb(t_info info);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_info info);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_info info);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_info info);
void	put_value(int *arr, t_stack *stack_a, int ac);
void	indexing(int *arr, t_stack *stack, int ac);
void	sort_3(t_stack *stack);
int		is_sorted(t_stack *stack);
void	sort_5(t_info info);
void	sort_4(t_info info);
int		min_num(t_stack *stack);
int		max_num(t_stack *stack);
int		find_first(t_stack *stack, int flag);
void	sort(t_info info);
void	a_to_b(t_info info, int chunk);
void	sort_b(t_stack *stack);
void	b_to_a(t_info info);
void	ft_free(char **strs);
int		parsing(char ***strs, char **argv);
int		check_sign(char c, char next_c, int *sign);
int		is_dup(int *arr, int i);
int		*ft_adtoi(int i, char **strs, int ac);
int		ft_swap(t_stack *stack);
void	ft_error(char **strs);

#endif
