/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:24:20 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/22 16:57:10 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_target(t_stack *sta, int value)
{
	int	i;
	int	min;
	int	target;

	i = -1;
	min = ARRAY_SIZE;
	while (++i < sta->len)
	{
		if (sta->stack[i] > value && (sta->stack[i] - value) < min)
		{
			min = sta->stack[i] - value;
			target = i;
		}
	}
	if (min == ARRAY_SIZE)
		return (find_min_index(sta->stack, &sta->len));
	return (target);
}

static int	find_price(int position, t_stack *stack)
{
	if (position > ((stack->len - 1) / 2))
		return (stack->len - position);
	return (position);
}

static t_cost	get_cost(t_stack *sta, t_stack *stb)
{
	t_cost	l;
	t_cost	m;
	int		i;

	i = -1;
	m.push_price = ARRAY_SIZE;
	while (++i < stb->len)
	{
		l.target = find_target(sta, stb->stack[i]);
		l.push_price = find_price(l.target, sta) + find_price(i, stb);
		l.position = i;
		l.value = stb->stack[i];
		l.target_val = sta->stack[l.target];
		if (l.push_price < m.push_price)
			m = l;
	}
	return (m);
}

static void	perform_sort(t_stack *sta, t_stack *stb, t_cost m)
{
	if (m.target > (sta->len - 1) / 2 && m.position > (stb->len - 1) / 2)
		while (sta->stack[0] != m.target_val && stb->stack[0] != m.value)
			rrr(sta->stack, stb->stack, &sta->len, &stb->len);
	if (m.target < (sta->len - 1) / 2 && m.position < (stb->len - 1) / 2)
		while (sta->stack[0] != m.target_val && stb->stack[0] != m.value)
			rr(sta->stack, stb->stack, &sta->len, &stb->len);
	if (m.target > (sta->len - 1) / 2)
		while (sta->stack[0] != m.target_val)
			rra(sta->stack, &sta->len);
	if (m.position > (stb->len - 1) / 2)
		while (stb->stack[0] != m.value)
			rrb(stb->stack, &stb->len);
	if (m.target < (sta->len - 1) / 2)
		while (sta->stack[0] != m.target_val)
			ra(sta->stack, &sta->len);
	if (m.position < (stb->len - 1) / 2)
		while (stb->stack[0] != m.value)
			rb(stb->stack, &stb->len);
	pa(sta->stack, stb->stack, &sta->len, &stb->len);
}

void	sort(t_stack *sta, t_stack *stb)
{
	if (sta->len == 2)
	{
		if (sta->stack[0] < sta->stack[1])
			sa(sta->stack);
	}
	else if (sta->len == 3)
		three_numbers(sta);
	else
	{
		while (sta->len > 3)
			pb(sta->stack, stb->stack, &sta->len, &stb->len);
		three_numbers(sta);
		while (stb->len > 0)
			perform_sort(sta, stb, get_cost(sta, stb));
	}
}
