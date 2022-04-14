/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_median.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:16:29 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/14 20:37:42 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

float	ft_intarray_median(t_intarray tab)
{
	float	median;

	ft_intarray_selection_sort(tab);
	if (ft_intarray_length(tab) % 2 == 0)
		median = (tab.data[tab.len / 2] + tab.data[(tab.len / 2) - 1]) / 2.0;
	else
		median = tab.data[tab.len / 2];
	return (median);
}
