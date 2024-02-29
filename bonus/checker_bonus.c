/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:45:36 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/29 12:29:29 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "checker_bonus.h"

static int	check_order(t_stack *sta)
{
	int	i;
	int	prev;

	i = -1;
	prev = -2147483648;
	while (++i < sta->len)
	{
		if (sta->stack[i] >= prev)
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

static int	find_cmd(char *cmd, t_stack *sta, t_stack *stb)
{
	if (ft_strncmp(cmd, "sa\n", 3) == 0)
		sa(sta);
	else if (ft_strncmp(cmd, "sb\n", 3) == 0)
		sb(stb);
	else if (ft_strncmp(cmd, "ss\n", 3) == 0)
		ss(sta, stb);
	else if (ft_strncmp(cmd, "pa\n", 3) == 0)
		pa(sta, stb);
	else if (ft_strncmp(cmd, "pb\n", 3) == 0)
		pb(sta, stb);
	else if (ft_strncmp(cmd, "ra\n", 3) == 0)
		ra(sta);
	else if (ft_strncmp(cmd, "rb\n", 3) == 0)
		rb(stb);
	else if (ft_strncmp(cmd, "rr\n", 3) == 0)
		rr(sta, stb);
	else if (ft_strncmp(cmd, "rra\n", 4) == 0)
		rra(sta);
	else if (ft_strncmp(cmd, "rrb\n", 4) == 0)
		rrb(stb);
	else if (ft_strncmp(cmd, "rrr\n", 4) == 0)
		rrr(sta, stb);
	else
		return (-1);
	return (0);
}

static int	line_checker(t_stack *sta, t_stack *stb)
{
	char	*cmd;

	while (1)
	{
		cmd = get_next_line(0);
		if (cmd == NULL)
			break ;
		if (find_cmd(cmd, sta, stb) == -1)
		{
			free(cmd);
			print_error();
			exit(EXIT_FAILURE);
		}
		free(cmd);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	t_stack	sta;
	t_stack	stb;

	if (argc == 1)
		return (0);
	sta.len = get_size(argc, argv);
	if (sta.len > ARRAY_SIZE || sta.len <= 0)
		return (print_error());
	stb.len = 0;
	if (parsing(argc, argv, sta.stack) == -1 || check_error(sta) == -1)
		return (print_error());
	if (line_checker(&sta, &stb) == -1)
		return (print_error());
	if (check_order(&sta) == 0)
		return (write(1, "OK\n", 3));
	return (write(1, "KO\n", 3));
}
