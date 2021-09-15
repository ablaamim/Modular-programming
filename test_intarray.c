/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_intarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 01:55:38 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/15 02:06:48 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "intarray.h"

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

	intarray_destroy(toto);
	intarray_destroy(titi);
	intarray_destroy(str);
	return (EXIT_SUCCESS);
}
