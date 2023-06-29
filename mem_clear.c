/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:29:11 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/29 15:48:23 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	mem_clear(t_stack *st)
{
	t_list	*p;
	t_list	*q;

	if (st->bottom == NULL)
		free(st);
	else
	{
		p = st->bottom->next;
		q = st->bottom;
		while (p != NULL)
		{
			free(q);
			q = NULL;
			q = p;
			p = p->next;
		}
		free(q);
		q = NULL;
		free(st);
		st = NULL;
	}
	return ;
}
