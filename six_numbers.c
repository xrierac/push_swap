/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   six_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:54:49 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/10 12:12:40 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_numbers(int arra[], int *len)
{
	if (arra[0] > arra[1] && arra[0] < arra[2])
		sa(arra);
	else if (arra[0] > arra[1] && arra[1] > arra[2])
	{
		sa(arra);
		rra(arra, len);
	}
	else if (arra[0] > arra[1] && arra[1] < arra[2])
		ra(arra, len);
	else if (arra[0] < arra[1] && arra[1] > arra[2])
	{
		sa(arra);
		ra(arra, len);
	}
	else if (arra[0] < arra[1] && arra[1] > arra[2])
		rra(arra, len);
}

void	five_numbers(int arra[], int arrb[], int *lena, int *lenb)
{
	if (*lena == 3)
		three_numbers(arra, lena);
	else
	{
		while (*lena > 3)
			pb(arra, arrb, lena, lenb);
		three_numbers(arra, lena);




