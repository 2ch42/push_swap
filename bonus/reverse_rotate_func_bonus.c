/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_func_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:24:24 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/03 21:35:29 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "checker_bonus.h"

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
