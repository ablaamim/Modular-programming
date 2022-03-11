# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 01:22:35 by ablaamim          #+#    #+#              #
#    Updated: 2022/03/11 21:16:42 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# Create a Makefile responsible of compiling our lib
NAME = modules.a
# Flags to compile our functions
CFLAGS = -Wall -Wextra -Werror
# Compiler
CC = gcc
# Functions that must compile through out Makefile
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
	  ft_intarray_delete.c \
	  unsorted_intarray_delete.c \
	  ft_intarray_add.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_intarray_get_min.c \
	  ft_intarray_get_index_of_min.c \
	  ft_empty_intarray_create.c \
# 	* create our executable file
# 	* replace all files with .c extension to .o extension
OBJS 	= $(SRCS:%.c=%.o)
# 	* "rules" for our makefile to run
all:	$(NAME)
# 	* ar ~create our file
# 	* -r ~"read" adds or modifies an already created file
# 	* -c ~suppress air message in terminal
#	* -s ~"refresh explorer"
$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)
# 	* forcibly delete all .o files created by our makefile
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)
# 	* force delete all created .o files and created .a file and then recompile my files
re:	fclean all
# 	* prevent our program from crashing if there is any folder or \
file with the name of one of our "rules"
.PHONY:	all clean fclean re
