/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:24:20 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/25 14:13:57 by xriera-c         ###   ########.fr       */
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
		if (sta->stack[i] > value && (sta->stack[i] - value) <= min)
		{
			min = sta->stack[i] - value;
			target = i;
		}
	}
	if (min == ARRAY_SIZE)
		target = find_min_index(sta);
	return (target);
}

int	find_price(int position, t_stack *stack)
{
	if (position > ((stack->len) / 2))
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
		if (l.push_price <= m.push_price)
			m = l;
	}
	return (m);
}

static void	perform_sort(t_stack *sta, t_stack *stb, t_cost m)
{
	if (m.target >= (sta->len) / 2 && m.position >= (stb->len) / 2)
		while (sta->stack[0] != m.target_val && stb->stack[0] != m.value)
			rrr(sta, stb);
	if (m.target < (sta->len) / 2 && m.position < (stb->len) / 2)
		while (sta->stack[0] != m.target_val && stb->stack[0] != m.value)
			rr(sta, stb);
	if (m.target >= (sta->len) / 2)
		while (sta->stack[0] != m.target_val)
			rra(sta);
	if (m.position >= (stb->len) / 2)
		while (stb->stack[0] != m.value)
			rrb(stb);
	if (m.target < (sta->len) / 2)
		while (sta->stack[0] != m.target_val)
			ra(sta);
	if (m.position < (stb->len) / 2)
		while (stb->stack[0] != m.value)
			rb(stb);
	pa(sta, stb);
}

void	sort(t_stack *sta, t_stack *stb)
{
	int	og_len;

	og_len = sta->len;
	if (sta->len == 2)
	{
		if (sta->stack[0] > sta->stack[1])
			sa(sta);
	}
	else
	{
		while (sta->len > (og_len / 2) + 1 && sta->len > 3)
			presort(sta, stb, (og_len / 2));
		while (sta->len > 3)
			presort(sta, stb, og_len);
		three_numbers(sta->stack[0], sta->stack[1], sta->stack[2], sta);
		while (stb->len > 0)
			perform_sort(sta, stb, get_cost(sta, stb));
		check_top(sta);
	}
}
