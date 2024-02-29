/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:39:06 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/29 11:09:41 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	reverse_rotate(t_stack *st)
{
	int	tmp;

	tmp = st->stack[st->len - 1];
	increase(st);
	st->len = st->len - 1;
	st->stack[0] = tmp;
}

void	rra(t_stack *stack)
{
	reverse_rotate(stack);
}

void	rrb(t_stack *stack)
{
	reverse_rotate(stack);
}

void	rrr(t_stack *sta, t_stack *stb)
{
	reverse_rotate(sta);
	reverse_rotate(stb);
}
