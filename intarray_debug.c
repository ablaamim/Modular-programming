/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray_debug.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:37:48 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/20 18:56:11 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_debug(int *tab, int size)
{
	int	i;

	i = 0;
	write(1, "[", 1);
	while (i < size - 1)
	{
		ft_print_numbers(tab[i]);
		i++;
	}
	ft_print_numbers(tab[size - 1]);
	write(1, "]", 1);
}


int	main(void)
{
	int	tab[] = {0, 1, 2, 3};

	ft_intarray_debug(tab, 4);
	write(1, "\n", 1);
	return (0);
}
