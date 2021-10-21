/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Statistics.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:36:09 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/16 01:09:08 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "intarray.h"
#include "tools.h"

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	int	real_len_of_tab;

	real_len_of_tab = 0;
	intarray tab = intarray_create(argc - 1);
	i = 1;
	while (i < argc)
	{
		n = string_to_int(argv[i]);
		intarray_set(tab, real_len_of_tab, n);
		real_len_of_tab++;
		printf("%d\n", n);
		i++;
	}
	tab.len = real_len_of_tab;
	intarray_debug(tab);
	printf("\n\n\n");
	printf("We will display some of the statistics :\n");
	printf("Sum = %d.\n", intarray_sum(tab));
	printf("Minimum = %d.\n", intarray_get_min(tab));
	printf("Average =  %f.\n", intarray_average(tab));
	printf("Median = %f.\n\n\n", intarray_median(tab));
	intarray_destroy(tab);
	return (EXIT_SUCCESS);
}
