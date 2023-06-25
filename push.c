/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:11:49 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/25 16:31:19 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

static int	get_offset(t_stack *st, int num)
{
	int		count;
	t_list	*p;

	count = 1;
	p = st->bottom;
	while (p != NULL)
	{
		if (p->num < num)
			count++;
		p = p->next;
	}
	return (count);
}

static void	mod_offset(t_stack *st, int offset)
{
	t_list	*p;

	p = st->bottom;
	while (p != NULL)
	{
		if (p->offset >= offset)
			p->offset += 1;
		p = p->next;
	}
	return ;
}

void	push(t_stack *st, int num)
{
	t_list	*p;
	int		offset;

	p = (t_list *)malloc(sizeof(t_list));
	p->num = num;
	p->next = NULL;
	offset = get_offset(st, num);
	if (st->bottom == NULL)
		st->bottom = p;
	else
		st->top->next = p;
	st->top = p;
	mod_offset(st, offset);
	p->offset = offset;
	p->a_count = -1;
	p->b_count = -1;
	st->size += 1;
	return ;
}
