/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:24:56 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/03 22:10:20 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "checker_bonus.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
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
		mem_two_clear(a, b);
		error_print();
		return (0);
	}
	if (get_com(a, b) == 1)
		get_checked(a);
	mem_two_clear(a, b);
	return (0);
}
