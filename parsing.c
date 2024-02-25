/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:08:17 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/25 15:20:06 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static int	check_limit(char *str)
{
	if (ft_strlen(str) > 9)
	{
		if (*str == '-' || *str == '+')
			return (0);
	}
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
	int			j;
	char		*check;

	j = -1;
	while (arr[++j] != '\0')
	{
		if (check_isnumber(arr[j]) == -1 || check_limit(arr[j]) == -1)
			return (-1);
		stack[i] = ft_atoi(arr[j]);
		if (stack[i] == -1 || stack[i] == 0)
		{
			check = ft_itoa(stack[i]);
			if (ft_strncmp(arr[j], check, ft_strlen(arr[j])) != 0)
			{
				free(check);
				return (-1);
			}
			free(check);
		}
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
