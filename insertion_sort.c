/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:11:57 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/08 17:36:52 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	find_min_index(int arr[], int *len)
{
	int	i;
	int	min;
	int	index;

	i = 0;
	min = arr[0];
	index = 0;
	while (i < *len)
	{
		if (min > arr[i])
		{
			min = arr[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	find_max_index(int arr[], int *len)
{
	int	i;
	int	max;
	int	index;

	i = 0;
	max = arr[0];
	index = 0;
	while (i < *len)
	{
		if (max < arr[i])
		{
			max = arr[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	insertion_sort(int arra[], int arrb[], int *lena, int *lenb)
{
	int	min;
	int	index;
	int	size;

	size = *lena;
	while (*lena != 0)
	{
		index = find_min_index(arra, lena);
		min = arra[index];
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
