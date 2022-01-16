/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_debug.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 07:21:59 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/16 07:31:46 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_debug(int *tab, int len)
{
	int	i;

	i = 0;
	write(1, "[", 1);
	while (i < len - 1)
	{
		ft_putnbr(tab[i]);
		write(1, " ", 1);
		i++;
	}
	ft_putnbr(tab[len - 1]);
	write(1, "]", 1);
}
