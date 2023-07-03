/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_sort_util.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:37:27 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/03 19:44:22 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	get_s_offset(t_stack *st)
{
	t_list	*p;
	t_list	*q;

	p = st->bottom;
	while (p != NULL)
	{
		p->s_offset = 1;
		p = p->next;
	}
	p = st->bottom;
	while (p != NULL)
	{
		q = st->bottom;
		while (q != NULL)
		{
			if (q->offset < p->offset)
				p->s_offset++;
			q = q->next;
		}
		p = p->next;
	}
}
