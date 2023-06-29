/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_func.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:24:24 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/29 18:42:28 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	rev_rotate(t_stack *st)
{
	t_list	*temp;

	if (st->bottom != NULL && st->bottom->next != NULL)
	{
		temp = st->bottom->next;
		st->top->next = st->bottom;
		st->top = st->bottom;
		st->top->next = NULL;
		st->bottom = temp;
	}
	return ;
}
