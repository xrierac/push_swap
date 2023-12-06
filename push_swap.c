/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:26 by xriera-c          #+#    #+#             */
/*   Updated: 2023/12/04 17:03:19 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main(int argc, char *argv[])
{
	int	i;
	t_list	*head;
	t_list	*node;

	if (argc > 1)
		head = ft_lstnew(ft_atoi(argv[1]));
	i = 1;
	while (++i < argc)
	{
		node = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(&head, node);
	}
	return (0);
}
