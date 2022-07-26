/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_selection_sort.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:34:21 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/26 19:10:01 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

/*
 * Sort by selection of minimum.
*/

void ft_intarray_selection_sort(t_intarray tab)
{
	 int	i;
	 int	min_index;
	 int	tmp;
	 int	j;

	 i = 0x0;
	 while (i < tab.len - 1)
	 {
		 min_index = i;
		 j = i + 1;
		while (j < tab.len)
		{
			if (tab.data[j] < tab.data[min_index])
				min_index = j;
			j++;
		}
		tmp = tab.data[i];
		tab.data[i] = tab.data[min_index];
		tab.data[min_index] = tmp;
		i++;
	 }

}
