/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:53:23 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/25 20:05:52 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int				num;
	int				offset;
	int				a_count;
	int				b_count;
	int				rb;
	int				rrb;
	int				ra;
	int				rra;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	int		size;
	t_list	*top;
	t_list	*bottom;
}	t_stack;

int		ft_strlen(char	*str);
long long	ft_atoi(const char *str);
void	ft_putnbr_fd(int n, int fd);
void	mem_clear(t_stack *stack);
void	push(t_stack *st, int num);
void	swap(t_stack *st_swap);
void	pop_push(t_stack *st_from, t_stack *st_to);
void	rotate(t_stack *st_rot);
void	rev_rotate(t_stack *st_rot);

#endif
