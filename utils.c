/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:17:10 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/22 16:17:16 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	increase(int arr[], int *len)
{
	int	i;

	i = 0;
	while (i < *len)
	{
		arr[*len - i - 1] = arr[*len - i - 2];
		i++;
	}
	*len = *len + 1;
}

void	decrease(int arr[], int *len)
{
	int	i;

	i = 0;
	while (i < *len)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	*len = *len - 1;
}
