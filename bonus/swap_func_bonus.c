/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_func_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:25:02 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/03 22:16:46 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "checker_bonus.h"

void	swap(t_stack *st)
{
	t_list	*temp;
	int		tmp_num;
	int		tmp_offset;

	if (st->bottom == NULL)
		return ;
	if (st->bottom != NULL && st->bottom->next != NULL)
	{
		temp = st->bottom;
		while (temp->next != st->top)
		{
			temp = temp->next;
		}
		tmp_num = temp->num;
		tmp_offset = temp->offset;
		temp->num = st->top->num;
		temp->offset = st->top->offset;
		st->top->num = tmp_num;
		st->top->offset = tmp_offset;
	}
	return ;
}
