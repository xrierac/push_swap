/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:28:05 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/18 14:37:43 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef ARRAY_SIZE
#  define ARRAY_SIZE 1000
# endif

typedef struct	s_stack
{
	int	len;
	int	stack[ARRAY_SIZE];
}	t_stack;

void	increase(int arr[], int *len);
void 	decrease(int arr[], int *len);
void	top_push(int taker[], int giver[], int *len_taker, int *len_giver);
void	rotate(int arr[], int *len);
void	reverse_rotate(int arr[], int *len);
void	swap(int arr[]);
void	insertion_sort(int arra[], int arrb[], int *lena, int *lenb);
void	create_rank(int stack[], int sorted[], int *len);
void	three_numbers(int arr[], int *len);
void	three_numbers_reverse(int arr[], int *len);
int		get_size(int argc, char *argv[]);
int		parsing(int argc, char *argv[], int stack[]);
int		check_error(t_stack stack);

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
