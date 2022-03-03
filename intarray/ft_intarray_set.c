/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_set.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:08:10 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/03 12:54:32 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_set(t_intarray tab, int index, int value)
{
	if (index < 0x0 || index >= tab->len)
	{
		ft_putstr("Please set a valid index.");
		return ;
	}
	tab->data[index] = value;
}
