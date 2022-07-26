/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:35:44 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/26 19:04:43 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	main(void)
{
	t_intarray tab1 = ft_intarray_create(10);
	ft_intarray_debug(tab1);
	printf("\n");
	tab1.data[0] = -1;
	tab1.data[1] = 42;
	tab1.data[2] = 42;
	tab1.data[3] = 1337;
	tab1.data[4] = -42;
	tab1.data[5] = 42;
	ft_intarray_set(tab1, 6, 101);
	ft_intarray_set(tab1, 7, 69);
	ft_intarray_set(tab1, 8, -1337);
	ft_intarray_set(tab1, 9, 666);
	ft_intarray_debug(tab1);
	printf("\n\n");
	ft_intarray_print_positive_values(tab1);
	printf("\n\n");
	printf("%d\n\n", ft_intarray_nb_occurences(tab1, 42));
	printf("%d\n\n", ft_intarray_get(tab1, 3));
	printf("%d\n\n", ft_intarray_get(tab1, -1));
	printf("%d\n\n", ft_intarray_length(tab1));
	t_intarray tab2 = ft_intarray_create(6);
	ft_intarray_set(tab2, 0, 0);
	ft_intarray_set(tab2, 1, 1337);
	ft_intarray_set(tab2, 2, 2022);
	ft_intarray_set(tab2, 3, 42);
	ft_intarray_set(tab2, 4, -42);
	ft_intarray_set(tab2, 5, 1929);
	ft_intarray_debug(tab2);
	printf("\n\n");
	t_intarray concat = ft_intarray_concat(tab1, tab2);
	ft_intarray_debug(concat);
	printf("\n\n%d\n\n", ft_intarray_length(concat));
	printf("%d\n\n", ft_intarray_get_min(tab1));
	printf("%d\n\n", ft_intarray_get_min(tab2));
	printf("%d\n\n", ft_intarray_get_max(tab1));
	printf("%d\n\n", ft_intarray_get_max(tab2));
	printf("%d\n\n", ft_intarray_get_index_of_min(tab1));
	printf("%d\n\n", ft_intarray_get_index_of_min(tab2));
	printf("%d\n\n", ft_intarray_get_index_of_max(tab1));
	printf("%d\n\n", ft_intarray_get_index_of_max(tab2));
	ft_intarray_selection_sort(tab1);
	ft_intarray_debug(tab1);
	printf("\n\n");
	free(tab1.data);
	free(tab2.data);
	free(concat.data);
	return (EXIT_SUCCESS);
}
