/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:26 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/25 14:07:50 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static int	check_order(t_stack *sta)
{
	int	i;
	int	prev;

	i = -1;
	prev = -1;
	while (++i < sta->len)
	{
		if (sta->stack[i] > prev)
			prev = sta->stack[i];
		else
			return (1);
	}
	return (0);
}

static int	print_error(void)
{
	write(2, "Error\n", 6);
	return (-1);
}

int	main(int argc, char *argv[])
{
	t_stack	sta;
	t_stack	stb;
	t_stack	rkd;	

	if (argc == 1)
		return (0);
	sta.len = get_size(argc, argv);
	if (sta.len > ARRAY_SIZE || sta.len <= 0)
		return (print_error());
	stb.len = 0;
	rkd.len = sta.len;
	if (parsing(argc, argv, sta.stack) == -1 || check_error(sta) == -1)
		return (print_error());
	create_rank(sta.stack, rkd.stack, &sta.len);
	if (check_order(&rkd) == 0)
		return (0);
	sort(&rkd, &stb);
	return (0);
}
