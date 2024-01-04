/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:39 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/04 12:20:31 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void	rotate(int arr[], int len)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = arr[i];
	while (i < len - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = tmp;
}

void	reverse_rotate(int arr[], int len)
{
	int	tmp;

	tmp = arr[len - 1];
	while ( len > 1)
	{
		arr[len - 1] = arr[len - 2];
		len--;
	}
	arr[0] = tmp;
}

void	top_push(int taker[], int giver[], int	len)
{
	int	i;

	if (giver[0] != '\0')
	{
		i = 0;
		while (len_taker - 1 > 1)
		{
			taker[len_taker - 1] = taker[len-taker
		}

}
*/
void	increase(int arr[], int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		arr[len - i - 1] = arr[len - i - 2];
		i++;
	}
}

void	decrease(int arr[], int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		arr[i] = arr[i + 1];
		i++;
	}
}

