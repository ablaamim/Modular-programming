/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_get_index_of_max.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:21:27 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/12 20:27:25 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_get_index_of_max(t_intarray tab)
{
	int	i;
	int	max;
	int	index_max;

	i = 0x0;
	max = tab.data[0];
	while (i < tab.len)
	{
		if (tab.data[i] > max)
		{
			max = tab.data[i];
			index_max = i;
		}
		i++;
	}
	return (index_max);
}
