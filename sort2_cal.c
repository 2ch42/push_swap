/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2_cal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:14:26 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/29 22:14:39 by changhyl         ###   ########.fr       */
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
			p->a_count = n - 1;
		else
			p->a_count = a->size - n + 1;
	}
	else
	{
		if (a->size / 2 >= n)
			p->a_count = n;
		else
			p->a_count = a->size - n;
	}
	if ((p->offset - r->offset > 0) && (a->size / 2 >= n - 1))
		p->rra = 1;
	if ((p->offset - r->offset > 0) && (a->size / 2 < n - 1))
		p->ra = 1;
	if ((p->offset - r->offset < 0) && (a->size / 2 >= n))
		p->rra = 1;
	if ((p->offset - r->offset < 0) && (a->size / 2 < n))
		p->ra = 1;
}

void	cal_a(t_stack *a, t_stack *b, t_list *p)
{
	t_list	*q;
	t_list	*r;
	int		min_d;

	q = a->bottom;
	min_d = 0;
	if (q == NULL)
		p->a_count = 0;
	else
	{
		while (q != NULL)
		{
			if (min_d == 0 || get_abs(p->offset - q->offset) < get_abs(min_d))
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
		if (pos < (b->size / 2))
		{
			p->b_count = b->size - pos;
			p->rrb = 1;
		}
		else
		{
			p->b_count = pos;
			p->rb = 1;
		}
		cal_a(a, b, p);
		p = p->next;
	}
	return ;
}

t_list	*cal_best(t_stack *a, t_stack *b)
{
	int	min_count;
	t_list	*p;
	t_list	*q;

	cal_b(a, b);
	p = b->bottom;
	if (p == NULL)
		return (NULL);
	min_count = p->a_count + p->b_count;
	q = p;
	while (p != NULL)
	{
		if (p->a_count + p->b_count < min_count)
		{
			min_count = p->a_count + p->b_count;
			q = p;
		}
		p = p->next;
	}
	return (q);
}
