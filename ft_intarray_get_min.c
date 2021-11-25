/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_get_min.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:04:46 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 16:13:28 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_get_min(t_intarray tab)
{
	int	i;
	int	min;

	i = 0;
	min = 1;
	while (i < tab.len)
	{
		if (tab.data[i] < min)
			min = tab.data[i];
		i++;
	}
	return (min);
}
