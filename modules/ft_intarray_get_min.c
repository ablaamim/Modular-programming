/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_get_min.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 09:33:13 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/04 11:31:37 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

int	ft_intarray_get_min(t_intarray tab)
{
	int	i;
	int	min;

	i = 0x0;
	min = 0x0;
	while (i < tab->len)
	{
		if (tab->data[i] < min)
			min = tab->data[i];
		i++;
	}
	return (min);
}
