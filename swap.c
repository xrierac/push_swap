/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:24:33 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/22 16:09:03 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static void	swap(int arr[])
{
	int	tmp;

	tmp = arr[0];
	arr[0] = arr[1];
	arr[1] = tmp;
}

void	sa(int arr[])
{
	swap(arr);
	ft_printf("sa\n");
}

void	sb(int arr[])
{
	swap(arr);
	ft_printf("sb\n");
}

void	ss(int arra[], int arrb[])
{
	swap(arra);
	swap(arrb);
	ft_printf("ss\n");
}
