/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_get_index_of_min.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:58:50 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/12 20:21:10 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_get_index_of_min(t_intarray tab)
{
	int	i;
	int	min;
	int	index_min;

	i = 0x0;
	min = tab.data[0];
	while (i < tab.len)
	{
		if (tab.data[i] < min)
		{
			min = tab.data[i];
			index_min = i;
		}
		i++;
	}
	return (index_min);
}
