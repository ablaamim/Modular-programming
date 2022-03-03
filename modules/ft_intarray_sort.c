/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:47:14 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/03 13:07:29 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

void	ft_intarray_sort(t_intarray tab)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
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
