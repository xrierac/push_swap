/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:24:20 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/21 15:00:13 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static int	find_target(t_stack *sta, int value)
{
	int	i;
	int	min;
	int	target;

	i = 0;
	min = ARRAY_SIZE;
	while (i < sta->len)
	{
		if (sta->stack[i] > value && (sta->stack[i] - value) < min)
		{
			min = sta->stack[i] - value;
			target = i
		}
		i++;
	}
	return (target);
}

static int	find_price(int target, int position, t_stack sta, t_stack stb)
{
	int	price;



}
void	sort(t_stack *sta, t_stack *stb)
{
	t_cost	temp_a;
	t_cost	temp_b;
	int		i;

	while (sta->len > 3)
		pb(sta->stack, stb->stack, sta->len, stb->len);
	while (stb->len > 0)
	{
		i = -1;
		while (++i < stb->len)
		{
			temp_a.value = stb->stack[i];
			temp_a.target = find_target(sta, temp_a.value);
			temp_a.push_price = find_price(temp_a.target, i, sta, stb);

		}


	}

}
void	sorting(t_stack *sta, t_stack *stb)
{
	if (sta->len = 2)
		if (sta->stack[0] < sta->stack[1])
			sa(sta->stack);
	else if (sta->len = 3)
		three_numbers(sta->stack, sta->len);
	else
	{
	}
	find_rank(sta, stb, 0, 67);
	insertion_sort(sta->stack, stb->stack, &sta->len, &stb->len);
}
