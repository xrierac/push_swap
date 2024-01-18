/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:08:17 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/18 15:08:37 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static int	free_memory(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
	return (0);
}

static int	populate_array(char **arr, int stack[], int reset)
{
	static int	i = 0;
	int			j;
	char		*check;

	if (reset == 1)
		i = 0;
	j = -1;
	while (arr[++j] != '\0')
	{
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
	free_memory(arr);
	return (i);
}

int	parsing(int argc, char *argv[], int stack[])
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		arr = ft_split(argv[i], ' ');
		if (populate_array(arr, stack, i) == -1)
			return (-1);
	}
	return (0);
}
