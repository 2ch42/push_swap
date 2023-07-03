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

NAME = pushswap
PUSH_SWAP = push_swap
CHECKER = checker
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRCS1 = ft_atoi.c error.c check_sorted.c mem_clear.c push.c pop_push_func.c rotate_func.c reverse_rotate_func.c swap_func.c push_swap_util.c special_sort_util.c special_sort.c sort.c sort2.c sort2_cal.c sort3.c push_swap.c
SRCS2 =
OBJS1 = $(SRCS1:.c=.o)
OBJS2 = $(SRCS2:.c=.o)

ifdef WITH_BONUS
	OBJ_FILES = $(OBJS1) $(OBJS2)
else
	OBJ_FILES = $(OBJS1)
endif

all:	$(NAME)

$(NAME):	$(PUSH_SWAP)

$(PUSH_SWAP):	$(OBJS1)
	$(CC) $(CFLAGS) $^ -o $@

$(CHECKER):	$(OBJS2)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJ_FILES)

fclean:	clean
	rm -f $(PUSH_SWAP)
	rm -f $(CHECKER)

re:
	$(MAKE)	fclean
	$(MAKE)	all

bonus:
	make WITH_BONUS = 1

.PHONY: all clean fclean re bonus
