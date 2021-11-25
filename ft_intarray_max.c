/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:22:37 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 17:28:33 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_max(t_intarray tab)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i < tab.len)
	{
		if (tab.data[i] > max)
			max = tab.data[i];
		i++;
	}
	return (max);
}
