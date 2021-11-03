/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_intarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:13:20 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/03 18:59:31 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		n;

	t_intarray str = ft_intarray_create(8);
	t_intarray str1 = ft_intarray_create(5);
	t_intarray tab = ft_intarray_create(10);
	t_intarray tab1 = ft_intarray_create(10);
	ft_intarray_set(tab, 9, 42);
	ft_intarray_set(tab, 5, 10);
	ft_intarray_debug(tab);
	printf("\n");
	ft_FAST_intarray_delete(&tab, 5);
	ft_intarray_debug(tab);
	printf("\n");

	ft_intarray_set(tab1, 4, 101);
	ft_intarray_set(tab1, 9, 1337);
	ft_intarray_debug(tab1);
	printf("\n");
	ft_SLOW_intarray_delete(&tab1, 5);
	ft_intarray_debug(tab1);
	printf("\n");
	ft_intarray_add(&tab1, 12);
	ft_intarray_debug(tab1);
	printf("\n");

	ft_intarray_set(str1, 0, 10);
	ft_intarray_set(str1, 1, 60);
	ft_intarray_set(str1, 2, 42);
	ft_intarray_set(str1, 3, 0);
	ft_intarray_set(str1, 4, 1337);
	ft_intarray_set(str1, 5, 2);
	ft_intarray_set(str, 1, -42);
	ft_intarray_set(str, 2, 60);
	ft_intarray_set(str, 7, 10);
	ft_intarray_set(str, 3, 20);
	ft_intarray_set(str, 4, 19);
	ft_intarray_set(str, 5, -19);

	ft_intarray_sort1(str);
	ft_intarray_debug(str);
	write(1, "\n", 1);

	printf("%f\n", ft_intarray_median(str));
	write(1, "\n", 1);

	ft_intarray_sort1(str1);
	ft_intarray_debug(str1);
	write(1, "\n", 1);

	printf("%f\n", ft_intarray_median(str1));
	write(1, "\n", 1);

	ft_putnbr(ft_intarray_sum(str));
	write(1, "\n", 1);

	ft_intarray_debug(str1);
	write(1, "\n" ,1);
	n = ft_intarray_get(str, 42);
	ft_putnbr(n);
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_length(str));
	write(1, "\n", 1);
	ft_intarray_debug(ft_intarray_concat(str1, str));
	write(1, "\n", 1);
	ft_intarray_debug(ft_intarray_concat(str, str1));
	write(1, "\n", 1);

	ft_putnbr(ft_intarray_length(str));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_length(str1));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_min(str));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_max(str));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_index_min(str));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_index_max(str));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_index_min_from(str, 4));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_index_max_from(str, -1));
	write(1, "\n", 1);
	ft_intarray_sort1(str);
	ft_intarray_debug(str);
	write(1, "\n", 1);
	printf("%f\n", ft_intarray_average(str));
	ft_intarray_destroy(str1);
	ft_intarray_destroy(str);
	ft_intarray_destroy(tab);
	return (EXIT_SUCCESS);
}
