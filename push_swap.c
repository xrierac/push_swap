/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:26 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/02 16:47:25 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	stack_a[argc - 1];
//	int	stack_b[argc - 1];
	int	i;

	i = 0;
	while (++i < argc)
		stack_a[i - 1] = ft_atoi(argv[i]);

	//TESTING AREA
	i = 0;
	while (++i < argc)
		ft_printf("%d\n", stack_a[i - 1]);
	//
	return (0);
}
