/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:47:54 by xriera-c          #+#    #+#             */
/*   Updated: 2024/02/29 10:55:28 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# ifndef ARRAY_SIZE
#  define ARRAY_SIZE 5000
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef FD_MAX
#  define FD_MAX 256
# endif

typedef struct s_stack
{
	int	len;
	int	stack[ARRAY_SIZE];
}	t_stack;

char	*get_next_line(int fd);
int		check_error(t_stack stack);
int		parsing(int argc, char *argv[], int stack[]);
int		get_size(int argc, char *argv[]);
char	*next_line(int fd, char *read_return, char *cache);
void	increase(t_stack *stack);
void	decrease(t_stack *stack);

//Operations
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *sta, t_stack *stb);
void	pa(t_stack *sta, t_stack *stb);
void	pb(t_stack *sta, t_stack *stb);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *sta, t_stack *stb);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *sta, t_stack *stb);

#endif
