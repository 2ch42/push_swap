/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:25:02 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/01 21:25:15 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	swap(t_stack *st_swap)
{
	t_list	*temp;
	int		tmp_num;

	if (st_swap->bottom != NULL && st_swap->bottom->next != NULL)
	{
		temp = st_swap->bottom;
		while (temp->next != st_swap->top)
		{
			temp = temp->next;
		}
		tmp_num = temp->num;
		temp->num = st_swap->top->num;
		st_swap->top->num = tmp_num;
	}
	return ;
}
