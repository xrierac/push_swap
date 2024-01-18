/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:24:20 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/18 17:31:39 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	find_rank(t_stack *sta, t_stack *stb, int min, int max)
{
	int	i;

	i = -1;
	while (i < max - min)
	{
		if (sta->stack[0] <= max && sta->stack[0] >= min)
		{
			pb(sta->stack, stb->stack, &sta->len, &stb->len);
			if (stb->stack[0] < max / 2 && stb->len > 1)
				rb(stb->stack, &stb->len);
			i++;
		}
		ra(sta->stack, &sta->len);
	}
	return (0);
}

void	sorting(t_stack *sta, t_stack *stb)
{
	find_rank(sta, stb, 0, 67);
	insertion_sort(sta->stack, stb->stack, &sta->len, &stb->len);
}
