/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_rank.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:10:53 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/18 15:06:15 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	create_rank(int stack[], int sorted[], int *len)
{
	int	i;
	int	j;
	int	count;

	i = -1;
	while (++i < *len)
	{
		count = 0;
		j = -1;
		while (++j < *len)
		{
			if (stack[i] > stack[j])
				count++;
		}
		sorted[i] = count;
	}
}
