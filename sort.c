/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:29:43 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/29 15:49:05 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	sort_1(t_stack *a, t_stack *b, int pivot_a, int pivot_b)
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
	int	pivot_a;
	int	pivot_b;

	pivot_a = a->size / 3;
	pivot_b = pivot_a * 2;
	sort_1(a, pivot_a, pivot_b);
	while (a->bottom != NULL)
	{
		push_pop(a, b);
		write(1, "pb\n", 3);
	}
	sort_2(a, b);
	write(1, "pa\n", 3);
	sort_3(a);
}
