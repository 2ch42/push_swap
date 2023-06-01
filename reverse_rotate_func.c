/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_func.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:24:24 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/01 21:24:25 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	rev_rotate(t_stack *st_rot)
{
	t_list	*temp;
	
	if (st_rot->bottom != NULL && st_rot->bottom->next != NULL)
	{
		temp = st_rot->bottom->next;
		st_rot->top->next = st_rot->bottom;
		st_rot->top = st_rot->bottom;
		st_rot->top->next = NULL;
		st_rot->bottom = temp;
	}
	return ;
}
