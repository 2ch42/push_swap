/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_push_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:24:31 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/25 16:33:36 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

static void	pop_push_one(t_stack *st_from, t_stack *st_to)
{
	st_to->top->next = st_from->top;
	st_to->top = st_from->top;
	st_from->top = NULL;
	st_from->next = NULL;
}

void	pop_push(t_stack *st_from, t_stack *st_to)
{
	t_list	*p;

	p = st_from->bottom;
	if (p == NULL)
		return ;
	if (p == st_from->top)
	{
		pop_push_one(st_from, to);
		return ;
	}
	while (temp->next != st_from->top)
	{
		p = p->next;
	}
	if (st_to->bottom == NULL)
		st_to->bottom = p->next;
	st_to->top->next = p->next;
	st_to->top = p->next;
	st_from->top = p;
	p->next = NULL;
	st_from->size -= 1;
	st_to->size += 1;
}
