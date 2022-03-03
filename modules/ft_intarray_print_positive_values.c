/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_print_positive_values.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:28:00 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/03 13:06:45 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

void	ft_intarray_print_positive_values(t_intarray tab)
{
	int	i;

	i = 0x0;
	while (i < tab->len)
	{
		if (tab->data[i] >= 0x0)
		{
			ft_putnbr(tab->data[i]);
			if (i == tab->len - 0x1)
				return ;
			ft_putstr(", ");
		}
		i++;
	}
}
