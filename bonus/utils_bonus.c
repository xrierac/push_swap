/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:17:10 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/29 10:22:26 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
