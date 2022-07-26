/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_nb_occurences.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:50:35 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/25 11:52:18 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_nb_occurences(t_intarray tab, int n)
{
	int	nb_occ;
	int	i;

	i = 0x0;
	nb_occ = 0x0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			nb_occ++;
		i++;
	}
	return (nb_occ);
}
