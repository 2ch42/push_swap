/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:24:37 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/03 16:19:17 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	rotate(t_stack *st)
{
	t_list	*temp;

	if (st->bottom == NULL)
		return ;
	if (st->bottom->next == NULL)
		return ;
	else
	{
		temp = st->bottom;
		while (temp->next != st->top)
			temp = temp->next;
		st->top->next = st->bottom;
		st->bottom = st->top;
		temp->next = NULL;
		st->top = temp;
	}
	return ;
}
