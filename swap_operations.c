/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:39 by xriera-c          #+#    #+#             */
/*   Updated: 2023/12/04 15:18:26 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*top_swap(int arr[])
{
	int	tmp;

	tmp = arr[0];
	arr[0] = arr[1];
	arr[1] = tmp;
	return (arr);
}

int	*rotate(int arr[], int len)
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
	return (arr);
}

int	*reverse_rotate(int arr[], int len)
{
	int	tmp;

	tmp = arr[len - 1];
	while ( len > 1)
	{
		arr[len - 1] = arr[len - 2];
		len--;
	}
	arr[0] = tmp;
	return (arr);
}

int	*top_push(int taker[], int giver[])
{
	int	tmp;

	if (giver[0] == '\0')
		return (NULL);
	while ()
	{
		tmp = taker[i];
		if (i == 0)
			taker[i] = giver[0];
	}

}
