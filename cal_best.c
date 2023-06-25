/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_best.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:20:33 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/25 17:26:46 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cal_a(t_stack *a, t_stack *b, t_list *p;)
{
	if (a->bottom == NULL)
		p->a_count = 0;
	
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
			p->b_count = b->size - pos;
		else
			p->b_count = pos;
		cal_a(a, b, p);
		p = p->next;
	}
	return ;
}

t_list	cal_best(t_stack *a, t_stack *b)
{
	cal
}
