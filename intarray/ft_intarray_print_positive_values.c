/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_print_positive_values.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:28:00 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/01 09:31:42 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_print_positive_values(t_intarray tab)
{
	int	i;

	i = 0x0;
	while (i < tab->len)
	{
		if (tab->data[i] >= 0)
			ft_putnbr(tab->data[i]);
		i++;
	}
}
