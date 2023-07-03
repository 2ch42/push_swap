/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:29:43 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/03 16:17:27 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

void	sort_1(t_stack *a, t_stack *b, int pivot_a, int pivot_b)
{
	int	size;

	size = a->size;
	while (size-- > 0)
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
	}
	return ;
}

void	sort(t_stack *a, t_stack *b)
{
	int	pivot_a;
	int	pivot_b;

	if (check_sorted(a) == 1)
		return ;
	if (special_sort(a, b) == 1)
		return ;
	pivot_a = a->size / 3;
	pivot_b = pivot_a * 2;
	sort_1(a, b, pivot_a, (int)pivot_b);
	while (a->bottom != NULL)
	{
		pop_push(a, b);
		write(1, "pb\n", 3);
	}
	sort_2(a, b);
	sort_3(a);
}
