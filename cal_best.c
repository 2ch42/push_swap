/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_best.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:20:33 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/25 22:03:28 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cal_a(t_stack *a, t_stack *b, t_list *p)
{
	t_list	*q;
	int		tem_res;

	q = a->bottom;
	if (q == NULL)
		p->a_count = 0;
	else
	{
		r = q->next;
		if (r == NULL)
		{
			if (p->offset > q->offset)
				
		}
	}
	return ;
}

void	cal_b(t_stack *a, t_stack *b)
{
	t_list	*p;
	int	pos;

	p = b->bottom;
	while (p != NULL)
	{
		pos = cal_pos(b, p);
		if (n < (b->size / 2))
		{
			p->b_count = b->size - pos;
			rrb = 1;
			rb = 0;
		}
		else
		{
			p->b_count = pos;
			rb = 1;
			rrb = 0;
		}
		cal_a(a, b, p);
		p = p->next;
	}
	return ;
}

t_list	cal_best(t_stack *a, t_stack *b)
{
	cal
}
