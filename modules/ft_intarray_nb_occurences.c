/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_nb_occurences.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:52:34 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/03 16:54:22 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_nb_occurences(t_intarray tab, int n)
{
	int	i;
	int	occ;

	i = 0x0;
	occ = 0x0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			occ++;
		i++;
	}
	return (occ);
}
