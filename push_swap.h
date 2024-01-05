/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:28:05 by xriera-c          #+#    #+#             */
/*   Updated: 2024/01/05 10:24:23 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
int	numcmp(const char *s1, const char *s2);

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;
*/

void	increase(int arr[], int *len);
void 	decrease(int arr[], int *len);
void	top_push(int taker[], int giver[], int *len_taker, int *len_giver);
void	rotate(int arr[], int *len);
void	reverse_rotate(int arr[], int *len);
void	swap(int arr[]);

#endif
