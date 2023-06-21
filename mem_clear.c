/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:29:11 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/21 17:11:59 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	mem_clear(t_stack *stack)
{
	t_list	*p;
	t_lsit	*q;

	if (stack->bottom == NULL)
		free(stack);
	else
	{
		p = stack->bottom->next;
		q = stack->bottom;
		while (p != NULL)
		{
			free(q);
			q = NULL;
			q = p;
			p = p->next;
		}
		free(q);
		q = NULL;
		free(stack);
		stack = NULL;
	}
	return ;
}
