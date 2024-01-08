/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:39 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/08 11:54:05 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int arr[])
{
	int	tmp;

	tmp = arr[0];
	arr[0] = arr[1];
	arr[1] = tmp;
}

void	rotate(int arr[], int *len)
{
	int	tmp;

	tmp = arr[0];
	decrease(arr, len);
	*len = *len + 1;
	arr[*len - 1] = tmp;
}

void	reverse_rotate(int arr[], int *len)
{
	int	tmp;

	tmp = arr[*len - 1];
	increase(arr, len);
	*len = *len - 1;
	arr[0] = tmp;
}

void	top_push(int taker[], int giver[], int *len_taker, int *len_giver)
{
	if (*len_giver != 0)
	{
		int	tmp;

		tmp = giver[0];
		decrease(giver, len_giver);
		increase(taker, len_taker);
		taker[0] = tmp;
	}
}

void	increase(int arr[], int *len)
{
	int	i;

	i = 0;
	while (i < *len)
	{
		arr[*len - i - 1] = arr[*len - i - 2];
		i++;
	}
	*len = *len + 1;
}

void	decrease(int arr[], int *len)
{
	int	i;

	i = 0;
	while (i < *len)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	*len = *len - 1;
}

