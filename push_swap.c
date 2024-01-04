/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:26 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/04 12:20:57 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	stack_a[argc - 1];
//	int	stack_b[argc - 1];
	int	i;
	int	len;

	i = 0;
	while (++i < argc)
		stack_a[i - 1] = ft_atoi(argv[i]);
	len = sizeof(stack_a) / sizeof(stack_a[0]);
	decrease(stack_a, len);
	//TESTING AREA
	i = 0;
	while (++i < len)
		ft_printf("%d\n", stack_a[i - 1]);
	//
	return (0);
}
