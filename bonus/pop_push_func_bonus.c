/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_push_func_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:24:31 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/03 21:26:09 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "checker_bonus.h"

static void	pop_push_one(t_stack *st_from, t_stack *st_to)
{
	if (st_to->bottom == NULL)
	{
		st_to->bottom = st_from->bottom;
		st_to->top = st_from->top;
		st_from->bottom = NULL;
		st_from->top = NULL;
		st_to->size = 1;
		st_from->size = 0;
		return ;
	}
	st_to->top->next = st_from->top;
	st_to->top = st_from->top;
	st_from->top = NULL;
	st_from->bottom = NULL;
	st_from->size = 0;
	st_to->size++;
}

void	pop_push(t_stack *st_from, t_stack *st_to)
{
	t_list	*p;

	p = st_from->bottom;
	if (p == NULL)
		return ;
	if (p == st_from->top)
	{
		pop_push_one(st_from, st_to);
		return ;
	}
	while (p->next != st_from->top)
	{
		p = p->next;
	}
	if (st_to->bottom == NULL)
		st_to->bottom = p->next;
	else
		st_to->top->next = p->next;
	st_to->top = p->next;
	st_from->top = p;
	p->next = NULL;
	st_from->size -= 1;
	st_to->size += 1;
}
