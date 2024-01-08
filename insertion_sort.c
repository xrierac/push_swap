/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:11:57 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/08 11:49:10 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	insertion_sort(int arra[], int arrb[], int *lena, int *lenb)
{
	int	i;
	int	min;
	int	index;

	while (*lena != 0)
	{
		i = 0;
		min = arra[0];
		while (i < *lena)
		{
			if (min > arra[i])
			{
				min = arra[i];
				index = i;
			}
			i++;
		}
		if (index < (*lena / 2))
		{
			while (arra[0] != min)
				ra(arra, lena);
			pb(arra, arrb, lena, lenb);
		}
		else
		{
			while (arra[0] != min)
				rra(arra, lena);
			pb(arra, arrb, lena, lenb);
		}
	}
	while (*lenb != 0)
		pa(arra, arrb, lena, lenb);
}
