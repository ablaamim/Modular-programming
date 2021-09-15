# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 02:12:51 by alaamimi          #+#    #+#              #
#    Updated: 2021/09/16 00:39:11 by alaamimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all : Statistics intarray
	echo "Compilation terminated."

Statistics : Statistics.o tools.o intarray.o
	gcc Statistics.o tools.o intarray.o -o Statistics

intarray : intarray.o test_intarray.o tools.o
	gcc test_intarray.o intarray.o tools.o -o intarray

intarray.o : intarray.c intarray.h
	gcc -c intarray.c

Statistics.o : Statistics.c tools.h intarray.h
	gcc -c Statistics.c

test_intarray.o : test_intarray.c intarray.h tools.h
	gcc -c test_intarray.c

tools.o : tools.c tools.h
	gcc -c tools.c
