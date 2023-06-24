/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:29:43 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/24 20:10:18 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	get_pivot(t_stack *st, int *pivot_a, int *pivot_b, int *size)
{
	t_list	*p;

	if (!st)
		return (0);
	if (st->bottom == NULL)
		return (0);
	p = st->bottom;
	*size = 0;
	while (p != NULL)
	{
		*size += 1;
		p = p->next;
	}
	*pivot_a = size/3;
	*pivot_b = size/3;
	return ;
}

void	cal_min(t_stack *st)
{
	
}

void	sort_1(t_stack *a, t_stack *b, int pivot_a, int pivot_b, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (a->top > pivot_b)
		{
			rotate(a);
			write(1, "ra\n", 3);
		}
		else if (a->top > pivot_a && a->top <= pivot_b)
		{
			pop_push(a, b);
			write(1, "pb\n", 3);
		}
		else
		{
			pop_push(a, b);
			write(1, "pb\n", 3);
			rotate(b);
			write(1, "rb\n", 3);
		}
		i++;
	}
	return ;
}

void	sort(t_stack *a, t_stack *b)
{
	int	size;
	int	pivot_a;
	int	pivot_b;

	get_pivot(a, &pivot_a, &pivot_b, size);
	sort_1(a, pivot_a, pivot_b, size);
	while (a->bottom != NULL)
		push_pop(a, b);
	
}
