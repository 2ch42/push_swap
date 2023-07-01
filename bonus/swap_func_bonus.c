/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:25:02 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/29 22:00:30 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	swap(t_stack *st)
{
	t_list	*temp;
	int		tmp_num;

	if (st->bottom != NULL && st->bottom->next != NULL)
	{
		temp = st->bottom;
		while (temp->next != st->top)
		{
			temp = temp->next;
		}
		tmp_num = temp->num;
		temp->num = st->top->num;
		st->top->num = tmp_num;
	}
	return ;
}
