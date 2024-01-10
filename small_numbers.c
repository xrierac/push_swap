/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:54:49 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/10 13:49:39 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_numbers(int arr[], int *len)
{
	if (arr[0] > arr[1] && arr[0] < arr[2])
		sa(arr);
	else if (arr[0] > arr[1] && arr[1] > arr[2])
	{
		sa(arr);
		rra(arr, len);
	}
	else if (arr[0] > arr[1] && arr[1] < arr[2])
		ra(arr, len);
	else if (arr[0] < arr[1] && arr[1] > arr[2])
	{
		sa(arr);
		ra(arr, len);
	}
	else if (arr[0] < arr[1] && arr[1] > arr[2])
		rra(arr, len);
}

void	three_numbers_reverse(int arr[], int *len)
{
	if (arr[0] > arr[1] && arr[0] < arr[2])
		rrb(arr, len);
	else if (arr[0] < arr[1] && arr[1] < arr[2])
	{
		sb(arr);
		rrb(arr, len);
	}
	else if (arr[0] > arr[1] && arr[1] < arr[2])
	{
		rrb(arr, len);
		sb(arr);
	}
	else if (arr[0] < arr[1] && arr[1] > arr[2])
		rb(arr, len);
	else if (arr[0] < arr[1] && arr[1] > arr[2])
		sb(arr);;

}
/*
void	small_numbers(int arra[], int arrb[], int *lena, int *lenb)
{
	if (*lena == 3)
		three_numbers(arra, lena);
	else
	{
		while (*lena > 3)
			pb(arra, arrb, lena, lenb);
		three_numbers(arra, lena);
		if (arrb[0] > arra[0] && arrb[0] < arra[*lena - 1])
			pa(arra, arrb, lena, lenb);
*/
