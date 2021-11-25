/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_print_positive_values.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:35:25 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 12:55:37 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_print_positive_values(int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (tab[i] >= 0)
		{
			ft_print_numbers(tab[i]);
			ft_putchar(' ');
		}
		i++;
	}
}
