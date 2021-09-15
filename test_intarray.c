/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_intarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 01:55:38 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/15 22:20:06 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "intarray.h"

//TESTER OF ALL MODULES OF INTARRAY

int	main(void)
{
	int a;
	int b;

	a = 42;
	b = 1337;
	printf("%d %d\n", a, b);
	intarray_swap(&a, &b);
	printf("%d %d\n", a, b);

	intarray	str = intarray_create(5);
	intarray	toto = intarray_create(3);
	intarray	titi = intarray_create(4);
	intarray	string = intarray_create(6);
	intarray	string1 = intarray_create(5);

	intarray_set(string1, 0, 2);
	intarray_set(string1, 1, 1);
	intarray_set(string1, 2, 5);
	intarray_set(string1, 3, 4);
	intarray_set(string1, 4, 6);

	intarray_set(string, 0, 3);
	intarray_set(string, 1, 5);
	intarray_set(string, 2, 2);
	intarray_set(string, 3, 10);
	intarray_set(string, 4, 0);
	intarray_set(string, 5, 6);

	intarray_set(str, 0, 42);
	intarray_set(str, 1, -42);
	intarray_set(str, 2, 1337);
	intarray_set(str, 3, -1337);
	intarray_set(str, 4, 19);

	intarray_set(toto, 0, 42);
	intarray_set(toto, 1, -1337);
	intarray_set(toto, 2, 101);

	intarray_set(titi, 0, -42);
	intarray_set(titi, 1, -69);
	intarray_set(titi, 2, 19);
	intarray_set(titi, 3, -19);

	intarray_debug(str);
	printf("\n%d\n", intarray_get(str, 2));
	intarray_print_positive_values(str);
	printf("\n");
	printf("%d", intarray_length(str));
	printf("\n");
	intarray_debug(toto);
	printf("\n");
	intarray_debug(titi);
	printf("\n");
	intarray_debug(intarray_concat(toto, titi));
	printf("\n");
	printf("%d\n", intarray_get_min(toto));
	printf("%d\n", intarray_get_min(titi));
	printf("%d\n", intarray_get_min(str));
	printf("%d\n", intarray_get_index_of_min(str));
	printf("%d\n", intarray_get_index_of_min(toto));
	printf("%d\n", intarray_get_index_of_min(titi));

	printf("%d\n", intarray_get_index_of_min_from(str, 3));
	printf("%d\n", intarray_get_index_of_min_from(toto, 1));
	printf("%d\n", intarray_get_index_of_min_from(titi, 2));

	intarray_debug(str);
	printf("\n");
	intarray_sort1(str);
	intarray_debug(str);
	printf("\n");
	intarray_debug(toto);
	printf("\n");
	intarray_sort1(toto);
	intarray_debug(toto);
	printf("\n");

	intarray_debug(titi);
	printf("\n");
	intarray_sort(titi);
	intarray_debug(titi);
	printf("\n");
	intarray_debug(string);
	printf("\n");
	printf("%d\n", intarray_sum(string));
	printf("%f\n\n", intarray_average(string));
	intarray_debug(string);
	printf("\n");
	intarray_sort(string);
	intarray_debug(string);
	printf("\n");
	printf("%f\n\n", intarray_median(string));

	intarray_debug(string1);
	printf("\n");
	printf("%f\n", intarray_median(string1));
	intarray_debug(string1);
	printf("\n");

	intarray_destroy(string1);
	intarray_destroy(string);
	intarray_destroy(toto);
	intarray_destroy(titi);
	intarray_destroy(str);
	return (EXIT_SUCCESS);
}
