/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:18:25 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/12 17:03:27 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	main(void)
{
	t_intarray tab;

	tab = ft_intarray_create(6);
	ft_intarray_debug(tab);
	ENDL;
	ft_intarray_set(tab, 0, 1);
	ft_intarray_set(tab, 1, 42);
	ft_intarray_set(tab, 2, -42);
	ft_intarray_set(tab, 3, 1337);
	ft_intarray_set(tab, 4, -42);
	ft_intarray_set(tab, 5, -42);
	ft_intarray_debug(tab);
	ENDL;
	ft_intarray_print_positive_values(tab);
	ENDL;
	ft_putnbr(ft_intarray_search(tab, -42));
	ENDL;
	ft_putnbr(ft_intarray_nb_occurences(tab, -42));
	ENDL;
	ft_putnbr(ft_intarray_length(tab));
	ENDL;
	ft_intarray_destroy(tab);
	return (EXIT_SUCCESS);
}
