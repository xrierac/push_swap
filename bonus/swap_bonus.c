/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:24:33 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/29 11:10:39 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	swap(t_stack *stack)
{
	int	tmp;

	tmp = stack->stack[0];
	stack->stack[0] = stack->stack[1];
	stack->stack[1] = tmp;
}

void	sa(t_stack *stack)
{
	swap(stack);
}

void	sb(t_stack *stack)
{
	swap(stack);
}

void	ss(t_stack *sta, t_stack *stb)
{
	swap(sta);
	swap(stb);
}
