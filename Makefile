# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 17:51:44 by ablaamim          #+#    #+#              #
#    Updated: 2021/11/25 17:55:16 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intarray.a

CFLAGS = -Wall -Wextra -Werror
CC = gcc

SRCS = ft_intarray_concat.c \
	   ft_intarray_create.c \
	   ft_intarray_debug.c \
	   ft_intarray_destroy.c \
	   ft_intarray_get.c \
	   ft_intarray_get_min.c \
	   ft_intarray_len.c \
	   ft_intarray_max.c \
	   ft_intarray_nb_occurence.c \
	   ft_intarray_print_positive_values.c \
	   ft_intarray_search.c \
	   ft_intarray_set.c \
	   ft_intarray_sort1.c \
	   ft_intarray_swap.c \
	   ft_print_numbers.c \
	   ft_putchar.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean :
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
