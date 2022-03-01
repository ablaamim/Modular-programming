/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_debug.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 07:21:59 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/01 09:23:20 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_debug(t_intarray tab)
{
	int	i;

	i = 0x0;
	write(1, "[", 1);
	while (i < tab->len - 1)
	{
		ft_putnbr(tab->data[i]);
		write(1, " ", 1);
		i++;
	}
	ft_putnbr(tab->data[tab->len - 1]);
	write(1, "]", 1);
}
