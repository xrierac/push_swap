/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:27:55 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/23 14:03:36 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static void	top_push(t_stack *st1, t_stack *st2)
{
	int	tmp;

	if (st1->len != 0)
	{
		tmp = st1->stack[0];
		decrease(st1);
		increase(st2);
		st2->stack[0] = tmp;
	}
}

void	pa(t_stack *sta, t_stack *stb)
{
	top_push(stb, sta);
	ft_printf("pa\n");
}

void	pb(t_stack *sta, t_stack *stb)
{
	top_push(sta, stb);
	ft_printf("pb\n");
}
