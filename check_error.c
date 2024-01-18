/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:03:40 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/18 15:05:39 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_error(t_stack stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack.len)
	{
		j = 0;
		while (j < stack.len)
		{
			if (j != i && stack.stack[i] == stack.stack[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}
