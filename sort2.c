/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:20:33 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/29 21:12:29 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

void	sort_2_rot(t_stack *a, t_stack *b, t_list *p)
{
	if (p->rb == 1)
	{
		while (b->b_count-- > 0)
		{
			rotate(b);
			write(1, "rb\n", 3);
		}
	}
	if (p->rrb == 1)
	{
		while (b->b_count-- > 0)
		{
			rev_rotate(b);
			write(1, "rrb\n", 4);
		}
	}
	if (p->ra == 1)
	{
		while (a->a_count-- > 0)
		{
			rotate(j);
			write(1, "ra\n", 3);
		}
	}
	if (p->rra == 1)
	{
		while (a->a_count-- > 0)
		{
			rev_rotate(j);
			write(1, "rra\n", 4);
		}
	}
}

void	sort_2(t_stack *a, t_stack *b)
{
	t_list	*p;

	while (b->bottom != NULL)
	{
		p = cal_best(a, b);
		sort_2_rot(a, b, p);
		pop_push(b, a);
		write(1, "pa\n", 3);
	}
}
