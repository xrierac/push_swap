/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:32:10 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/22 17:07:51 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_numbers(t_stack *s)
{
	if (s->stack[0] > s->stack[1] && s->stack[0] < s->stack[2])
		sa(s->stack);
	else if (s->stack[0] > s->stack[1] && s->stack[1] > s->stack[2])
	{
		sa(s->stack);
		rra(s->stack, &s->len);
	}
	else if (s->stack[0] > s->stack[1] && s->stack[1] < s->stack[2])
		ra(s->stack, &s->len);
	else if (s->stack[0] < s->stack[1] && s->stack[0] < s->stack[2])
	{
		sa(s->stack);
		ra(s->stack, &s->len);
	}
	else if (s->stack[0] < s->stack[1] && s->stack[1] > s->stack[2])
		rra(s->stack, &s->len);
}
