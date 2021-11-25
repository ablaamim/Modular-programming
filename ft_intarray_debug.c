/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray_debug.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:37:48 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 12:45:13 by ablaamim         ###   ########.fr       */
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
		ft_putchar(' ');
		ft_putchar(',');
		i++;
	}
	ft_print_numbers(tab[size - 1]);
	write(1, "]", 1);
}
