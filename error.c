/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:01:23 by changhyl          #+#    #+#             */
/*   Updated: 2023/06/21 22:33:12 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	check_digit(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) =='-')
		{
			if (ft_isdigit(*(str + i + 1) == 0))
				return (-1);
		}
		else if (ft_isdigit(*(str + i) == 0))
			return (-1);
		i++;
	}
	return (1);
}

void	error_print(void)
{
	write(3,"Error\n", 6);
}

int	check_dup(t_stack *a, int num)
{
	t_list	*p;

	if (a->bottom == NULL)
		return (0);
	p = a->bottom;
	while (p != NULL)
	{
		if (p->num == num)
			return (1);
		p = p->next;
	}
	return (0);
}

int	check_input(int argc, char *argv[], t_stack *a)
{
	int	i;
	long long n;

	if (argc  != 3)
		return (-1);
	i = argc - 1;
	while (i > 0)
	{
		if (check_digit(argv[i] == -1))
			return (-1);
		if (check_dup(a, argv[i]) == 1)
			return (-1);
		n = ft_atoi(argv[i]);
		if (ft_strlen(argv[i]) > 11 || n > 2146483647 || n < -2147483648)
			return (-1);
		push(a, (int)n);
		i--;
	}
	return (1);
}
