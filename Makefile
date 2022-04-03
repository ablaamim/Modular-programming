# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 16:37:01 by ablaamim          #+#    #+#              #
#    Updated: 2022/04/03 16:54:42 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# 	* CREATE A MAKEFILE TO COMPILATE OUR LIB * #

# 	* generate a file type .a ~file responsible for creating our lib
NAME = intarray.a
# 	* command to compile our functions
CFLAGS	= -Wall -Werror -Wextra
CC	= gcc
# 	* functions that must be compiled through our makefile
SRCS = ./modules/ft_intarray_create.c \
		  ./modules/ft_intarray_debug.c \
		  ./modules/ft_putnbr.c \
		  ./modules/ft_intarray_print_positive_values.c \
		  ./modules/ft_intarray_search.c \
		  ./modules/ft_intarray_nb_occurences.c
# 	* create our executable file
# 	* replace all files with .c extension to .o extension
OBJS 	= $(SRCS:%.c=%.o)

# 	* "rules" for our makefile to run
all:	$(NAME)

$(NAME):	$(OBJS)
# 	* ar ~create our file
# 	* -r ~"read" adds or modifies an already created file
# 	* -c ~suppress air message in terminal
#	* -s ~"refresh explorer"
	ar -rcs $(NAME) $(OBJS)

# 	* forcibly delete all .o files created by our makefile
clean:
	rm -rf $(OBJS)

# 	* force delete all created .o files and created .a file
fclean: clean
	rm -f $(NAME)

# 	* force delete all created .o files and created .a file and then recompile my files
re:	fclean all

# 	* prevent our program from crashing if there is any folder or \
file with the name of one of our "rules"
.PHONY:	all clean fclean re
