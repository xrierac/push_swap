/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:17:10 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/23 15:00:01 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	increase(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->len)
	{
		stack->stack[stack->len - i] = stack->stack[stack->len - i - 1];
		i++;
	}
	stack->len = stack->len + 1;
}

void	decrease(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->len)
	{
		stack->stack[i] = stack->stack[i + 1];
		i++;
	}
	stack->len = stack->len - 1;
}
