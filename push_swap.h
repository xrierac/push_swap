/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:28:05 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/22 16:09:55 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef ARRAY_SIZE
#  define ARRAY_SIZE 1000
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

void	increase(int arr[], int *len);
void	decrease(int arr[], int *len);
void	rotate(int arr[], int *len);
void	reverse_rotate(int arr[], int *len);
void	create_rank(int stack[], int sorted[], int *len);
void	three_numbers(t_stack *stack);
int		get_size(int argc, char *argv[]);
int		parsing(int argc, char *argv[], int stack[]);
int		check_error(t_stack stack);
void	sort(t_stack *sta, t_stack *stb);
int		find_min_index(int arr[], int *len);

//Operations
void	sa(int arr[]);
void	sb(int arr[]);
void	ss(int arra[], int arrb[]);
void	pa(int arra[], int arrb[], int *lena, int *lenb);
void	pb(int arra[], int arrb[], int *lena, int *lenb);
void	ra(int arr[], int *len);
void	rb(int arr[], int *len);
void	rr(int arra[], int arrb[], int *lena, int *lenb);
void	rra(int arr[], int *len);
void	rrb(int arr[], int *len);
void	rrr(int arra[], int arrb[], int *lena, int *lenb);

#endif
