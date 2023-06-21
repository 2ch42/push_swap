/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:24:56 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/21 22:26:52 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	a = (t_stack *)malloc(sizeof(t_stack));//null로 초기화 시켜주는거 포함해서 새로 함수 짜기.
	if (!a)
		return (0);
	b = (t_stack *)malloc(sizeof(t_stack));
	if (!b)
	{
		mem_clear(a);
		return (0);
	}
	if (argc == 1)
		return (0);
	if (check_input(argc, argv, a, b) == -1)
	{
		mem_clear(a);
		mem_clear(b);
	}
	push
}
