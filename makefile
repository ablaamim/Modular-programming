# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 02:12:51 by alaamimi          #+#    #+#              #
#    Updated: 2021/09/15 02:18:28 by alaamimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

intarray : intarray.o test_intarray.o
	gcc test_intarray.o intarray.o -o intarray
intarray.o : intarray.c intarray.h
	gcc -c intarray.c
test_intarray.o : test_intarray.c intarray.h
	gcc -c test_intarray.c
