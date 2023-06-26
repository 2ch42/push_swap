/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_best.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:20:33 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/26 20:26:57 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	cal_a_rot(t_stack *a, t_list *p, t_list *r)
{
	int	n;

	n = cal_pos(a, r);
	if (p->offset - r->offset > 0)
	{
		if (a->size / 2 >= n - 1)
		{
			p->a_count = n - 1;
			p->rra = 1;
		}
		else
		{
			p->a_count = a->size - n + 1;
			p->ra = 1;
		}
	}
	else
	{
		if (a->size / 2 >= n)
		{
			p->a_count = n;
			p->rra = 1;
		}
		else
		{
			p->a_count = a->size - n + 1;
			p->ra = 1;
		}
	}
}

void	cal_a(t_stack *a, t_stack *b, t_list *p)
{
	t_list	*q;
	t_list	*r;
	int		min_d;

	q = a->bottom;
	if (q == NULL)
		p->a_count = 0;
	min_d = 0;
	else
	{
		while (q != NULL)
		{
			if (mind_d == 0 || get_abs(p->offset - q->offset) < get_abs(min_d))
			{
				min_d = p->offset - q->offset;
				r = q;
			}
			q = q->next;
		}
		cal_a_rot(a, p, r);
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
		}
		else
		{
			p->b_count = pos;
			rb = 1;
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
