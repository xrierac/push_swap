/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:33:35 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/08 11:29:18 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ra(int arr[], int *len)
{
	rotate(arr, len);
	ft_printf("ra\n");
}

void	rb(int arr[], int *len)
{
	rotate(arr, len);
	ft_printf("rb\n");
}

void	rr(int arra[], int arrb[], int *lena, int *lenb)
{
	rotate(arra, lena);
	rotate(arrb, lenb);
	ft_printf("rr\n");
}


