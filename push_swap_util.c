/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:21:57 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/25 17:15:09 by changhyl         ###   ########.fr       */
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

void	init_stack(t_stack *st)
{
	st->size = 0;
	st->top = NULL;
	st->bottom = NULL;
	return ;
}
