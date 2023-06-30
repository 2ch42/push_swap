/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:11:14 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/30 19:35:36 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

void	sort_3_rot(t_stack *a, int size, int pos)
{
	int	i;

	i = 0;
	if (size / 2 >= pos)
	{
		while (i < pos)
		{
			rev_rotate(a);
			write(1, "rra\n", 4);
			i++;
		}
	}
	else
	{
		while (i < size - pos)
		{
			rotate(a);
			write(1, "ra\n", 3);
			pos++;
		}
	}
}

void	sort_3(t_stack *a)
{
	t_list	*p;
	int		i;

	p = a->bottom;
	if (p == NULL)
		return ;
	i = 1;
	while (p->offset != 1)
	{
		p = p->next;
		i++;
	}
	sort_3_rot(a, a->size, i);
}
