/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:39:06 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/23 12:08:12 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

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
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	reverse_rotate(stack);
	ft_printf("rrb\n");
}

void	rrr(t_stack *sta, t_stack *stb)
{
	reverse_rotate(sta);
	reverse_rotate(stb);
	ft_printf("rrr\n");
}
