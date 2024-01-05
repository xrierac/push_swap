/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:39 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/05 09:47:08 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
void	rotate(int arr[], int len)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = arr[i];
	while (i < len - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = tmp;
}

void	reverse_rotate(int arr[], int len)
{
	int	tmp;

	tmp = arr[len - 1];
	while ( len > 1)
	{
		arr[len - 1] = arr[len - 2];
		len--;
	}
	arr[0] = tmp;
}
*/
void	top_push(int taker[], int giver[], int *len_taker, int *len_giver)
{
	int	tmp;

	tmp = giver[0];
	decrease(giver, len_giver);
	increase(taker, len_taker);
	taker[0] = tmp;
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

