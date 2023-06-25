/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:21:57 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/25 22:03:34 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(*(str + i))
	{
		i++;
	}
	return (i);
}



int	cal_pos(t_stack *st, t_list *tar)
{
	int		n;
	t_list	*p;

	n = 1;
	p = st->bottom;
	while (p != NULL)
	{
		if (p == tar)
			return (n);
		p = p->next;
		n++;
	}
	return (-1);
}

void	init_node(t_list *p)
{
	p->next = NULL;
	p->a_count = -1;
	p->b_count = -1;
	p->ra = 0;
	p->rra = 0;
	p->rb = 0;
	p->rrb = 0;
}

void	init_stack(t_stack *st)
{
	st->size = 0;
	st->top = NULL;
	st->bottom = NULL;
	return ;
}
