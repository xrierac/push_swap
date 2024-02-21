/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:32:10 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/21 14:01:34 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_numbers(int arra[], int len)
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
