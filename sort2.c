/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:20:33 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/29 22:10:45 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"
#include <stdio.h>

void	sort_2_rot_a(t_stack *a, t_list *p)
{
	if (p->ra == 1)
	{
		while (p->a_count-- > 0)
		{
			rotate(a);
			write(1, "ra\n", 3);
		}
	}
	else if (p->rra == 1)
	{
		while (p->a_count-- > 0)
		{
			rev_rotate(a);
			write(1, "rra\n", 4);
		}
	}
	return ;
}

void	sort_2_rot_b(t_stack *b, t_list *p)
{
	if (p->rb == 1)
	{
		while (p->b_count-- > 0)
		{
			rotate(b);
			write(1, "rb\n", 3);
		}
	}
	else if (p->rrb == 1)
	{
		while (p->b_count-- > 0)
		{
			rev_rotate(b);
			write(1, "rrb\n", 4);
		}
	}
	return ;
}

void	sort_2_rot(t_stack *a, t_stack *b, t_list *p)
{
	sort_2_rot_b(b, p);
	sort_2_rot_a(a, p);
	return ;
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
