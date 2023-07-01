/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:53:23 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/01 18:32:59 by ch               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

typedef struct s_list
{
	int				num;
	int				offset;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	int		size;
	t_list	*top;
	t_list	*bottom;
}	t_stack;

int			ft_strlen(char	*str);
long long	ft_atoi(const char *str);
int			get_abs(int n);
int			cal_pos(t_stack *st, t_list *tar);
void		init_node(t_list *p);
void		init_stack(t_stack *st);
void		mem_clear(t_stack *st);
void		error_print(void);
int			check_input(int argc, char *argv[], t_stack *a, t_stack *b);
int			check_sorted(t_stack *st);
void		push(t_stack *st, int num);
void		swap(t_stack *st);
void		pop_push(t_stack *st_from, t_stack *st_to);
void		rotate(t_stack *st);
void		rev_rotate(t_stack *st);
void		sort_1(t_stack *a, t_stack *b, int pivot_a, int pivot_b, int size);
void		sort(t_stack *a, t_stack *b);
void		cal_a_rot(t_stack *a, t_list *p, t_list *r);
void		cal_a(t_stack *a, t_list *p);
void		cal_b(t_stack *a, t_stack *b);
t_list		*cal_best(t_stack *a, t_stack *b);
void		sort_2_rot_a(t_stack *a, t_list *p);
void		sort_2_rot_b(t_stack *b, t_list *p);
void		sort_2_rot(t_stack *a, t_stack *b, t_list *p);
void		sort_2(t_stack *a, t_stack *b);
void		sort_3_rot(t_stack *a, int size, int pos);
void		sort_3(t_stack *a);

#endif
