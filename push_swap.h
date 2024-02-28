/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:28:05 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/28 15:02:40 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef ARRAY_SIZE
#  define ARRAY_SIZE 5000
# endif

typedef struct s_stack
{
	int	len;
	int	stack[ARRAY_SIZE];
}	t_stack;

typedef struct s_cost
{
	int	target_val;
	int	value;
	int	push_price;
	int	target;
	int	position;
}	t_cost;

void	increase(t_stack *stack);
void	decrease(t_stack *stack);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	create_rank(int stack[], int sorted[], int *len);
void	three_numbers(int a, int b, int c, t_stack *stack);
int		get_size(int argc, char *argv[]);
int		parsing(int argc, char *argv[], int stack[]);
int		check_error(t_stack stack);
void	sort(t_stack *sta, t_stack *stb);
int		find_min_index(t_stack *stack);
int		find_price(int position, t_stack *stack);
void	presort(t_stack *sta, t_stack *stb, int cluster);
void	check_top(t_stack *sta);

//Operations
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *sta, t_stack *stb);
void	pa(t_stack *sta, t_stack *stb);
void	pb(t_stack *sta, t_stack *stb);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *sta, t_stack *stb);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *sta, t_stack *stb);

#endif
