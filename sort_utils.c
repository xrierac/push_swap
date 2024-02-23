/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:11:57 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/23 17:28:38 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_top(t_stack *sta)
{
	int	i;

	i = 0;
	while (sta->stack[i] != 0)
		i++;
	if (i >= sta->len / 2)
		while (sta->stack[0] != 0)
			rra(sta);
	if (i < sta->len / 2)
		while (sta->stack[0] != 0)
			ra(sta);
}

int	find_min_index(t_stack *stack)
{
	int	i;
	int	min;
	int	index;

	i = 0;
	min = stack->stack[0];
	index = 0;
	while (i < stack->len)
	{
		if (min > stack->stack[i])
		{
			min = stack->stack[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	presort(t_stack *sta, t_stack *stb, int cluster)
{
	int		i;
	t_cost	val;

	val.push_price = ARRAY_SIZE;
	i = -1;
	while (++i < sta->len)
	{
		if (sta->stack[i] < cluster && find_price(i, sta) < val.push_price)
		{
			val.push_price = find_price(i, sta);
			val.value = sta->stack[i];
			val.position = i;
		}
	}
	if (val.position > (sta->len - 1) / 2)
		while (sta->stack[0] != val.value)
			rra(sta);
	if (val.position < (sta->len - 1) / 2)
		while (sta->stack[0] != val.value)
			ra(sta);
	pb(sta, stb);
}
