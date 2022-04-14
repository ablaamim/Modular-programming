/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_selection_sort.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:35:42 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/14 23:27:30 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_selection_sort(t_intarray *tab)
{
	int	i;
	int	j;
	int	tmp;

	i = 0x0;
	while (i < tab->len)
	{
		j = i + 1;
		while (j < tab->len)
		{
			if (tab->data[i] > tab->data[j])
			{
				tmp = tab->data[i];
				tab->data[i] = tab->data[j];
				tab->data[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
