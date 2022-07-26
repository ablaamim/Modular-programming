/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_get_min.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:31:28 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/25 12:37:05 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_get_min(t_intarray tab)
{
	int	min;
	int	i;

	min = tab.data[0];
	i = 0x0;
	while (i < tab.len)
	{
		if (tab.data[i] < min)
			min = tab.data[i];
		i++;
	}
	return (min);
}
