/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_get.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:23:06 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/03 13:05:37 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

int	ft_intarray_get(t_intarray tab, int index)
{
	if (index < 0x0 || index >= tab->len)
	{
		ft_putstr("Please enter a valid index : ");
		return(-1);
	}
	return (tab->data[index]);
}
