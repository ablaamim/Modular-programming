/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_get_max.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:38:02 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/25 12:39:45 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_get_max(t_intarray tab)
{
	int	i;
	int	max;

	max = tab.data[0x0];
	i = 0x0;
	while (i < tab.len)
	{
		if (tab.data[i] > max)
			max = tab.data[i];
		i++;
	}
	return (max);
}
