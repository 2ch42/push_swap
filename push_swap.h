/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:53:23 by changhyl          #+#    #+#             */
/*   Updated: 2023/05/29 12:33:50 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int			num;
	struct s_list	*next;
}	t_list;

typedef struct	s_stack
{
	t_list	*top;
	t_list	*bottom;
}	t_stack;

#endif
