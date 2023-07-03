/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_util_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:21:57 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/03 21:35:48 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "checker_bonus.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((*(str1 + i) == *(str2 + i)) && *(str1 + i) && *(str2 + i)
		&& (i + 1) < n)
		i++;
	return (*(str1 + i) - *(str2 + i));
}

void	init_node(t_list *p)
{
	p->next = NULL;
}

void	init_stack(t_stack *st)
{
	st->size = 0;
	st->top = NULL;
	st->bottom = NULL;
	return ;
}
