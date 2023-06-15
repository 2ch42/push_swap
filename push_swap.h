/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:53:23 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/14 22:21:10 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int				num;
	int				offset;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	t_list	*top;
	t_list	*bottom;
}	t_stack;

int		ft_atoi(const char *str);
void	ft_putnbr_fd(int n, int fd);
void	push(t_stack *st, int num);
int		pop(t_stack *st, int num);	//추후 코드 따라서 리턴값 수정 예정.
void	swap(t_stack *st_swap);
void	pop_push(t_stack *st_from, t_stack *st_to);
void	rotate(t_stack *st_rot);
void	rev_rotate(t_stack *st_rot);

#endif
