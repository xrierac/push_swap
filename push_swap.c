/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:26 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/09 17:11:25 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	stack_a[argc - 1];
	int	stack_b[argc - 1];
	int sorted[argc - 1];
	int	i;
	int	*lena;
	int	*lenb;
	int a;
	int	b;

	i = 0;
	b = 0;
	lenb = &b;
	while (++i < argc)
		stack_a[i - 1] = ft_atoi(argv[i]);
	a = sizeof(stack_a) / sizeof(stack_a[0]);
	lena = &a;
	create_rank(stack_a, sorted, lena);
	insertion_sort(sorted, stack_b, lena, lenb);	
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
