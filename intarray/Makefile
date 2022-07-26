# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 12:29:43 by ablaamim          #+#    #+#              #
#    Updated: 2022/07/26 19:04:07 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intarray.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ./ft_intarray_concat.c \
	   ./ft_intarray_create.c \
	   ./ft_intarray_debug.c \
	   ./ft_intarray_destroy.c \
	   ./ft_intarray_get.c \
	   ./ft_intarray_get_index_of_max.c \
	   ./ft_intarray_get_index_of_min.c \
	   ./ft_intarray_get_max.c \
	   ./ft_intarray_get_min.c \
	   ./ft_intarray_length.c \
	   ./ft_intarray_nb_occurences.c \
	   ./ft_intarray_print_positive_values.c \
	   ./ft_intarray_set.c \
	   ./ft_intarray_selection_sort.c \

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
