/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:27:55 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/22 16:10:42 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static void	top_push(int taker[], int giver[], int *len_taker, int *len_giver)
{
	int	tmp;

	if (*len_giver != 0)
	{
		tmp = giver[0];
		decrease(giver, len_giver);
		increase(taker, len_taker);
		taker[0] = tmp;
	}
}

void	pa(int arra[], int arrb[], int *lena, int *lenb)
{
	top_push(arra, arrb, lena, lenb);
	ft_printf("pa\n");
}

void	pb(int arra[], int arrb[], int *lena, int *lenb)
{
	top_push(arrb, arra, lenb, lena);
	ft_printf("pb\n");
}
