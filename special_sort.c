/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:18:18 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/03 19:42:55 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

static t_list	*get_off_node(t_stack *st, int offset)
{
	t_list	*p;

	p = st->bottom;
	while (p != NULL)
	{
		if (p->offset == offset)
		{
			return (p);
		}
		p = p->next;
	}
	return (NULL);
}

static void	three_sort(t_stack *a)
{
	if (a->bottom->s_offset == 1 && a->bottom->next->s_offset == 3)
	{
		write(1, "rra\n", 4);
		rev_rotate(a);
	}
	else if (a->bottom->s_offset == 2 && a->bottom->next->s_offset == 1)
	{
		write(1, "ra\n", 3);
		rotate(a);
	}
	else if (a->bottom->s_offset == 3 && a->bottom->next->s_offset == 1)
	{
		write(1, "sa\n", 3);
		swap(a);
	}
	else if ((a->bottom->s_offset == 2 && a->bottom->next->s_offset == 3)
		|| (a->bottom->s_offset == 1 && a->bottom->next->s_offset == 2))
	{
		write(1, "rra\n", 4);
		rev_rotate(a);
		three_sort(a);
	}
}

static void	move_five(t_stack *a, t_stack *b, t_list *p, int size)
{
	int	pos;

	pos = cal_pos(a, p);
	if (size / 2 >= pos)
	{
		while (pos-- > 0)
		{
			write(1, "rra\n", 4);
			rev_rotate(a);
		}
	}
	else
	{
		while (size > pos++)
		{
			write(1, "ra\n", 3);
			rotate(a);
		}
	}
	write(1, "pb\n", 3);
	pop_push(a, b);
}

static void	five_sort(t_stack *a, t_stack *b)
{
	t_list	*p;

	p = get_off_node(a, 1);
	move_five(a, b, p, 5);
	p = get_off_node(a, 2);
	move_five(a, b, p, 4);
	get_s_offset(a);
	three_sort(a);
	pop_push(b, a);
	pop_push(b, a);
	write(1, "pa\npa\n", 6);
}

int	special_sort(t_stack *a, t_stack *b)
{
	if (a->size == 3)
	{
		get_s_offset(a);
		three_sort(a);
		return (1);
	}
	if (a->size == 5)
	{
		five_sort(a, b);
		return (1);
	}
	return (-1);
}
