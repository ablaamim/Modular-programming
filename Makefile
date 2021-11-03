# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 08:23:57 by ablaamim          #+#    #+#              #
#    Updated: 2021/11/03 08:26:18 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

intarray : intarray.o test_intarray.o
	gcc test_intarray.o intarray.o -o intarray

intarray.o : intarray.c intarray.h
	gcc -c intarray.c

test_intarray.o : test_intarray.c intarray.h
	gcc -c test_intarray.c
