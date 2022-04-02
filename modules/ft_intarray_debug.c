/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_debug.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:51:42 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/01 16:13:52 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_debug(t_intarray tab)
{
	int	i;

	i = 0x0;
	while (i < tab.len)
	{
		ft_putnbr(tab.data[i]);
		i++;
	}
}
