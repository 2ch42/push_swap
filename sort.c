/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:29:43 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/29 22:09:44 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

void	sort_1(t_stack *a, t_stack *b, int pivot_a, int pivot_b, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (a->top->offset > pivot_b)
		{
			rotate(a);
			write(1, "ra\n", 3);
		}
		else if (a->top->offset > pivot_a && a->top->offset <= pivot_b)
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
	sort_1(a, b, pivot_a, pivot_b, a->size);
	while (a->bottom != NULL)
	{
		pop_push(a, b);
		write(1, "pb\n", 3);
	}
	sort_2(a, b);
	sort_3(a);
}
