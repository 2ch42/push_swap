/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:35:32 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/04 15:50:43 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "checker_bonus.h"

int	check_sorted(t_stack *st)
{
	t_list	*p;
	int		n;

	p = st->bottom;
	n = st->size;
	while (p != NULL)
	{
		if (n != p->offset)
			return (-1);
		p = p->next;
		n--;
	}
	return (1);
}

void	get_checked(t_stack *a, t_stack *b)
{
	if (check_sorted(a) == 1 && b->size == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
