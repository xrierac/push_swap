/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:26 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/08 11:31:40 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	stack_a[argc - 1];
	int	stack_b[argc - 1];
	int	i;
	int	*len_a;
	int	*len_b;
	int a;
	int	b;

	i = 0;
	b = 0;
	len_b = &b;
	while (++i < argc)
		stack_a[i - 1] = ft_atoi(argv[i]);
	a = sizeof(stack_a) / sizeof(stack_a[0]);
	len_a = &a;
	insertion_sort(stack_a, stack_b, len_a, len_b);	
	//TESTING AREA
/*	i = 0;
	while (++i <= *len_a)
		ft_printf("%d\n", stack_a[i - 1]);
	i = 0;
	while (++i <= *len_b)
		ft_printf("%d\n", stack_b[i - 1]);
*/
	//
	return (0);
}
