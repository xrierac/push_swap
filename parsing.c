/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:08:17 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/26 09:25:04 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <limits.h>

static int	check_maxmin(char *str)
{
	 long	l;

	l = ft_atol(str);
	if (l > INT_MAX || l < INT_MIN)
		return (-1);
	return (0);
}

static int	check_isnumber(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (-1);
		i++;
	}
	return (0);
}

static int	populate_array(char **arr, int stack[])
{
	static int	i = 0;
	int		j;

	j = -1;
	while (arr[++j])
	{
		if (check_isnumber(arr[j]) == -1 || ft_strlen(arr[j]) > 11)
			return (-1);
		if (check_maxmin(arr[j]) == -1)
			return (-1);
		stack[i] = ft_atoi(arr[j]);
		i++;
	}
	return (0);
}

int	parsing(int argc, char *argv[], int stack[])
{
	int		i;
	char	**arr;

	i = 0;
	while (++i < argc)
	{
		arr = ft_split(argv[i], ' ');
		if (populate_array(arr, stack) == -1)
		{
			ft_free_array(arr);
			return (-1);
		}
		ft_free_array(arr);
	}
	return (0);
}
