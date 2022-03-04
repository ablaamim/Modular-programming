/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_get_index_of_min.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:31:48 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/04 11:49:51 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

int	ft_intarray_get_index_of_min(t_intarray tab)
{
	int	i;
	int	min;
	int	index_min;

	i = 0x0;
	min = 0x0;
	index_min = 0x0;
	while (i < tab->len)
	{
		if (tab->data[i] < min)
		{
			min = tab->data[i];
			index_min = i;
		}
		i++;
	}
	return (index_min);
}
