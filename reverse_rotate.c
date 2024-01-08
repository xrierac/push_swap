/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:39:06 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/08 11:29:39 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	rra(int arr[], int *len)
{
	reverse_rotate(arr, len);
	ft_printf("rra\n");
}

void	rrb(int arr[], int *len)
{
	reverse_rotate(arr, len);
	ft_printf("rrb\n");
}

void	rrr(int arra[], int arrb[], int *lena, int *lenb)
{
	reverse_rotate(arra, lena);
	reverse_rotate(arrb, lenb);
	ft_printf("rrr\n");
}
