/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:11:49 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/29 16:40:34 by changhyl         ###   ########.fr       */
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
	if (!p)
		exit(1);
	init_node(p);
	p->num = num;
	if (st->bottom == NULL)
		st->bottom = p;
	else
		st->top->next = p;
	st->top = p;
	offset = get_offset(st, num);
	mod_offset(st, offset);
	p->offset = offset;
	st->size += 1;
	return ;
}
