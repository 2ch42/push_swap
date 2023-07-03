/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:53:23 by changhyl          #+#    #+#             */
/*   Updated: 2023/07/03 22:08:47 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	int				num;
	int				offset;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	int		size;
	t_list	*top;
	t_list	*bottom;
}	t_stack;

int			ft_strlen(char *str);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_clear_str(char **str);
char		*ft_strdup(char *s1, size_t len, size_t *tot_len);
char		*ft_strjoin(char *s1, char *s2, size_t *len1, size_t len2);
char		*ft_substr(char *s, unsigned int start, size_t len, size_t tot_len);
char		*get_next_line(int fd);
long long	ft_atoi(const char *str);
void		init_node(t_list *p);
void		init_stack(t_stack *st);
void		mem_clear(t_stack *st);
void		mem_two_clear(t_stack *st1, t_stack *st2);
void		error_print(void);
int			check_input(int argc, char *argv[], t_stack *a, t_stack *b);
int			check_sorted(t_stack *st);
void		get_checked(t_stack *a);
void		push(t_stack *st, int num);
int			get_com(t_stack *a, t_stack *b);
void		swap(t_stack *st);
void		pop_push(t_stack *st_from, t_stack *st_to);
void		rotate(t_stack *st);
void		rev_rotate(t_stack *st);

#endif
