/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_sort1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:32:28 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 17:39:33 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_sort1(t_intarray tab)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < tab.len)
	{
		j = i + 1;
		while (j < tab.len)
		{
			if (tab.data[i] > tab.data[j])
			{
				tmp = tab.data[i];
				tab.data[i] = tab.data[j];
				tab.data[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
