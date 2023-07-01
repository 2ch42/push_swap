/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:24:56 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/01 18:11:16 by ch               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (0);
	a = (t_stack *)malloc(sizeof(t_stack));
	if (!a)
		return (0);
	b = (t_stack *)malloc(sizeof(t_stack));
	if (!b)
	{
		mem_clear(a);
		return (0);
	}
	if (check_input(argc, argv, a, b) == -1)
	{
		mem_clear(a);
		mem_clear(b);
		error_print();
		return (0);
	}
	sort(a, b);
	mem_clear(a);
	mem_clear(b);
	return (0);
}
