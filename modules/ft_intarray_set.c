/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_set.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:48:15 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/12 16:51:03 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_set(t_intarray tab, int index, int value)
{
	int	i;

	i = 0x0;
	while (i < tab.len)
	{
		if (tab.data[i] == tab.data[index])
			tab.data[i] = value;
		i++;
	}
}
