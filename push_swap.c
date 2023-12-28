/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:18:26 by xriera-c          #+#    #+#             */
/*   Updated: 2023/12/28 14:00:27 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		i;
	int		stack[argc - 1];
	t_list	*tmp;
	t_list	*node;
	t_list	*head;

	i = 1;
	while (!argv[i])
	   stack[i -1] = ft_atoi(argv[i]);	
	if (argc > 1)
	{
		i = 0;
		head = ft_lstnew(&stack[i]);
		tmp = head;
		ft_printf("%d\n", head->content);
		while (++i < argc)
		{
			node = ft_lstnew(&stack[i]);
			tmp->next = node;
			tmp = node;
			ft_printf("%s\n", node->content);
		}
	//	ft_printf("%s\n", head->content);
	//	ft_printf("%d\n", numcmp(head->content, node->content));
	}
	//TESTING//
	//END OF TESTING//
	return (0);
}
