/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:03:40 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/17 10:32:30 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_error(int stack[])
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = sizeof(stack) / stack[0];
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (j != i && stack[i] == stack[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

