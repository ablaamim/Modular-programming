/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_get_index_of_max.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:51:08 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/25 12:53:52 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_get_index_of_max(t_intarray tab)
{
	int	i;
	int	max;
	int	max_index;

	i = 0x0;
	max = tab.data[0x0];
	while (i < tab.len)
	{
		if (tab.data[i] > max)
		{
			max = tab.data[i];
			max_index = i;
		}
		i++;
	}
	return (max_index);
}
