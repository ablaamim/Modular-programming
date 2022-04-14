/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:41:42 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/14 23:31:36 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"
#include <stdio.h>

int	main(void)
{
	t_intarray	tab = ft_intarray_create(4);
	ft_intarray_set(&tab, 0, 42);
	ft_intarray_set(&tab, 1, 1337);
	ft_intarray_set(&tab, 2, -42);
	ft_intarray_set(&tab, 3, 42);
	t_intarray	tab1 = ft_intarray_create(2);
	ft_intarray_set(&tab1, 0, 101);
	ft_intarray_set(&tab1, 1, -1);
	ft_intarray_debug(&tab);
	ENDL;
	ft_intarray_print_positive_values(&tab);
	ENDL;
	ft_putnbr(ft_intarray_search(&tab, 42));
	ENDL;
	ft_putnbr(ft_intarray_nb_occurences(&tab, 42));
	ENDL;
	ft_putnbr(ft_intarray_get(&tab, 0));
	ENDL;
	ft_putnbr(ft_intarray_length(&tab));
	ENDL;
	ft_putnbr(ft_intarray_min(&tab));
	ENDL;
	t_intarray concat = ft_intarray_concat(&tab, &tab1);
	ft_intarray_debug(&concat);
	ENDL;
	ft_putnbr(ft_intarray_max(&tab));
	ENDL;
	ft_putnbr(ft_intarray_get_index_of_min(&tab));
	ENDL;
	ft_putnbr(ft_intarray_get_index_of_max(&tab));
	ENDL;
	ft_putnbr(ft_intarray_sum(&tab));
	ENDL;
	t_intarray clone = ft_intarray_clone(&tab);
	ft_intarray_debug(&clone);
	ENDL;
	ft_intarray_destroy(&tab);
	return (EXIT_SUCCESS);
}
