/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 13:06:53 by xriera-c          #+#    #+#             */
/*   Updated: 2023/12/28 14:00:30 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	numcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == '0'))
    	s1++;
  	while (*s2 && (*s2 == '0'))
    	s2++;
	return (ft_strncmp(s1, s2, ft_strlen(s1)));
}
