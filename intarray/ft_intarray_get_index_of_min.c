/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_get_index_of_min.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:45:57 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/26 18:57:28 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_get_index_of_min(t_intarray tab)
{
	int	i;
	int	min;
	int	min_index;

	i = 0x0;
	min = tab.data[0];
	while(i < tab.len)
	{
		if (tab.data[i] < min)
		{
			min = tab.data[i];
			min_index = i;
		}
		i++;
	}
	return (min_index);
}
