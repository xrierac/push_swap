/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:24:20 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/10 12:12:48 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	find_min(int arr[], int bot, int top, int *len)
{
	int	i;
	int	min;
	int	index_top;
	int	index_bot;

	i = -1;
	min = arr[0];
	while (++i < *len)
	{
		if (min > arr[i] && min >= bot && min <= top && i < *len / 2)
		{
			min = arr[i];
			index_top = i;
		}
		if (min > arr[i] && min >= bot && min <= top)
		{
			min = arr[i];
			index_bot = i;
		}
	}
	if (index_bot - *len < index_top)
		return (index_bot);
	return (index_top);
}

void	sorting(int arra[], int arrb[], int *lena, int *lenb)
{
	int	i;

	i = -1;
	if (*lena <=110)
	{
		while (++i < 3)
		{



