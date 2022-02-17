/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_median.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:14:36 by ablaamim          #+#    #+#             */
/*   Updated: 2022/02/16 18:20:46 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"intarray.h"

float	ft_intarray_median(t_intarray tab)
{
	int	i;
	float	median;
	int	len;

	i = 0;
	median = 0;
	ft_intarray_sort(tab);
	len = ft_intarray_len(tab);
	if (len % 2 == 1)
		median = tab->data[len / 2];
	else
		median = tab->data[len / 2] + tab->data[(len / 2) - 1];
	return (median / 2);
}
