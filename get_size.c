/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:20:43 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/17 11:25:14 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	get_number_params(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			i++;
			j++;
		}
		if (*s == c && j != 0)
			j = 0;
		s++;
	}
	return (i);
}

int	get_size(int argc, char *argv[])
{
	int	size;
	int	i;

	i = 0;
	while (++i < argc)
	{
		size += get_number_params(argv[i], ' ');
	}
	return (size);
}
