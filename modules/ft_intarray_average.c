/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_average.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:08:20 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/14 20:19:26 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

float	ft_intarray_average(t_intarray tab)
{
	int	sum;
	int	total;

	sum = ft_intarray_sum(tab);
	total = tab.len;
	return ((sum * 1.0) / total);
}
