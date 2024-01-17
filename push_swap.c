/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:26 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/17 11:25:09 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
		return (0);
	parsing(argc, argv, get_size(argc, argv));
	stack = parsing(argc, argv, 500);
	if (check_error(stacka) == -1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}

	i = 0;
	a = sizeof(stack_a) / sizeof(stack_a[0]);
	lena = &a;
	create_rank(stack_a, sorted, lena);
	i = 0;
//	insertion_sort(sorted, stack_b, lena, lenb);
	while (i < *lena)
	{
		three_numbers(sorted, lenc);
		pb(sorted, stack_b, lena, lenb);
		pb(sorted, stack_b, lena, lenb);
		pb(sorted, stack_b, lena, lenb);
		i += 3;
	}
	//TESTING AREA
//	i = 0;
//	while (++i <= *len_a)
//		ft_printf("%d\n", stack_a[i - 1]);
//	i = 0;
//	while (++i <= *lena)
//		ft_printf("%d\n", sorted[i - 1]);
//
	return (0);
}
