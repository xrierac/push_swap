/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:33:35 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/23 12:14:12 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	rotate(t_stack *stack)
{
	int	tmp;

	tmp = stack->stack[0];
	decrease(stack);
	stack->len = stack->len + 1;
	stack->stack[stack->len - 1] = tmp;
}

void	ra(t_stack *stack)
{
	rotate(stack);
	ft_printf("ra\n");
}

void	rb(t_stack *stack)
{
	rotate(stack);
	ft_printf("rb\n");
}

void	rr(t_stack *sta, t_stack *stb)
{
	rotate(sta);
	rotate(stb);
	ft_printf("rr\n");
}
