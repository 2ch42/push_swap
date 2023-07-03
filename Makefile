# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 16:59:22 by changhyl          #+#    #+#              #
#    Updated: 2023/07/03 19:44:03 by changhyl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CHECKER = checker
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRCS1 = ft_atoi.c error.c check_sorted.c mem_clear.c push.c pop_push_func.c \
	rotate_func.c reverse_rotate_func.c swap_func.c push_swap_util.c \
	special_sort_util.c special_sort.c sort.c sort2.c sort2_cal.c sort3.c \
	push_swap.c
SRCS2 = bonus/ft_atoi_bonus.c bonus/get_next_line_utils_bonus.c bonus/get_next_line_bonus.c \
	bonus/pop_push_func_bonus.c bonus/rotate_func_bonus.c bonus/reverse_rotate_func_bonus.c \
	bonus/swap_func_bonus.c bonus/push_bonus.c bonus/error_bonus.c bonus/check_sorted_bonus.c \
       	bonus/checker_util_bonus.c bonus/command_bonus.c bonus/mem_clear_bonus.c bonus/checker_bonus.c
OBJS1 = $(SRCS1:.c=.o)
OBJS2 = $(SRCS2:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS1)
	$(CC) $(CFLAGS) $^ -o $@

$(CHECKER):	$(OBJS2)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJS1) $(OBJS2)

fclean:	clean
	rm -f $(NAME)
	rm -f $(CHECKER)

re:
	$(MAKE)	fclean
	$(MAKE)	all

bonus:		$(CHECKER)

.PHONY: all clean fclean re bonus
