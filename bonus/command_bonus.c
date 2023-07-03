/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:40:57 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/03 22:38:56 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "checker_bonus.h"

static void	mult_get_com(t_stack *a, t_stack *b, char *str, int len)
{
	if (ft_strncmp(str, "ss\n", len) == 0)
	{
		swap(a);
		swap(b);
	}
	else if (ft_strncmp(str, "rr\n", len) == 0)
	{
		rotate(a);
		rotate(b);
	}
	else if (ft_strncmp(str, "rrr\n", len) == 0)
	{
		rev_rotate(a);
		rev_rotate(b);
	}
}

static void	one_get_com(t_stack *a, t_stack *b, char *str, int len)
{
	if (ft_strncmp(str, "ra\n", len) == 0)
		rotate(a);
	else if (ft_strncmp(str, "rb\n", len) == 0)
		rotate(b);
	else if (ft_strncmp(str, "rra\n", len) == 0)
		rev_rotate(a);
	else if (ft_strncmp(str, "rrb\n", len) == 0)
		rev_rotate(b);
	else if (ft_strncmp(str, "pa\n", len) == 0)
		pop_push(b, a);
	else if (ft_strncmp(str, "pb\n", len) == 0)
		pop_push(a, b);
	else if (ft_strncmp(str, "sa\n", len) == 0)
		swap(a);
	else if (ft_strncmp(str, "sb\n", len) == 0)
		swap(b);
}

int	get_com(t_stack *a, t_stack *b)
{
	char	*str;
	int		len;

	str = get_next_line(0);
	while (str)
	{
		len = ft_strlen(str);
		if (ft_strncmp(str, "sa\n", len) == 0
			|| ft_strncmp(str, "sb\n", len) == 0
			|| ft_strncmp(str, "pa\n", len) == 0
			|| ft_strncmp(str, "pb\n", len) == 0
			|| ft_strncmp(str, "ra\n", len) == 0 || ft_strncmp(str, "rb\n", len) == 0
			|| ft_strncmp(str, "rra\n", len) == 0 || ft_strncmp(str, "rrb\n", len) == 0)
			one_get_com(a, b, str, len);
		else if (ft_strncmp(str, "ss\n", len) == 0 || ft_strncmp(str, "rr\n", len) == 0
			|| ft_strncmp(str, "rrr\n", len) == 0)
			mult_get_com(a, b, str, len);
		else
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		str = get_next_line(0);
	}
	return (1);
}
