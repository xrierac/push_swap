/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:26 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/18 16:42:25 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h" //remove this
#include "push_swap.h"

static int	print_error(void)
{
	write(2, "Error\n", 6);
	return(-1);
}

int	main(int argc, char *argv[])
{
	t_stack	sta;
	t_stack	stb;
	t_stack	rkd;	

	if (argc == 1)
		return (0);
	sta.len = get_size(argc, argv);
	if (sta.len > ARRAY_SIZE)
		return (print_error());
	stb.len = 0;
	rkd.len = sta.len;
	if (parsing(argc, argv, sta.stack) == -1 || check_error(sta) == -1)
		return (print_error());
	create_rank(sta.stack, rkd.stack, &sta.len);
	sorting(&rkd, &stb);
/*
	i = 0;
	a = sizeof(stack_a) / sizeof(stack_a[0]);
	lena = &a;
	i = 0;
	while (i < *lena)
	{
		three_numbers(sorted, lenc);
		pb(sorted, stack_b, lena, lenb);
		pb(sorted, stack_b, lena, lenb);
		pb(sorted, stack_b, lena, lenb);
		i += 3;
	}
*/	//TESTING AREA
//	while (++i <= *len_a)
//		ft_printf("%d\n", stack_a[i - 1]);
//	int	i = -1;
//	while (++i < sta.len)
//		ft_printf("%d\n", rkd.stack[i]);
//
	return (0);
}
