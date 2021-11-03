/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_intarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:13:20 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/03 09:00:57 by ablaamim         ###   ########.fr       */
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
	ft_intarray_set(str1, 0, 101);
	ft_intarray_set(str1, 4, 69);
	ft_intarray_set(str, 0, 42);
	ft_intarray_set(str, 1, -42);
	ft_intarray_set(str, 2, 69);
	ft_intarray_set(str, 7, 1337);
	ft_intarray_set(str, 3, 101);
	ft_intarray_set(str, 4, 19);
	ft_intarray_set(str, 5, -19);
	ft_intarray_debug(str);
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
	ft_intarray_destroy(str1);
	ft_intarray_destroy(str);
	return (EXIT_SUCCESS);
}
