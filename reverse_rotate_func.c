/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_func.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:24:24 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/30 20:07:54 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	rev_rotate(t_stack *st)
{
	t_list	*temp;

	if (st->bottom == NULL)
		return ;
	if (st->bottom->next == NULL)
		return ;
	else
	{
		temp = st->bottom->next;
		st->top->next = st->bottom;
		st->top = st->bottom;
		st->top->next = NULL;
		st->bottom = temp;
	}
	return ;
}
