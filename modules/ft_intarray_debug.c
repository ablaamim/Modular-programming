/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_debug.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 07:21:59 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/03 13:04:40 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

void	ft_intarray_debug(t_intarray tab)
{
	int	i;

	i = 0x0;
	write(0x1, "[", 0x1);
	while (i < tab->len - 0x1)
	{
		ft_putnbr(tab->data[i]);
		write(0x1, " ", 0x1);
		i++;
	}
	ft_putnbr(tab->data[tab->len - 0x1]);
	write(0x1, "]", 0x1);
}
