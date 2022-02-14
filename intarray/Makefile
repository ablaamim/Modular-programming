# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 01:22:35 by ablaamim          #+#    #+#              #
#    Updated: 2022/02/14 02:01:13 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intarray.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SRCS = ft_intarray_average.c \
	  ft_intarray_concat.c \
	  ft_intarray_create.c \
	  ft_intarray_debug.c \
	  ft_intarray_destroy.c \
	  ft_intarray_get.c \
	  ft_intarray_len.c \
	  ft_intarray_median.c \
	  ft_intarray_nb_occurences.c \
	  ft_intarray_print_positive_values.c \
	  ft_intarray_search.c \
	  ft_intarray_set.c \
	  ft_intarray_sort.c \
	  ft_intarray_sum.c \
	  ft_putnbr.c \
	  ft_intarray_clone.c \

OBJS 	= $(SRCS:%.c=%.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
