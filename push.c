/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:27:55 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/08 10:31:05 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	pa(int arra[], int arrb[], int *lena, int *lenb)
{
	top_push(arra, arrb, lena, lenb);
	ft_printf("pa\n");
}


void	pb(int arra[], int arrb[], int *lena, int *lenb)
{
	top_push(arrb, arra, lenb, lena);
	ft_printf("pb\n");
}
