/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_nb_occurences.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:48:54 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/16 09:19:54 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_nb_occurences(t_intarray tab, int n)
{
	int	i;
	int	occ;

	i = 0;
	occ = 0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			occ += 1;
		i++;
	}
	return (occ);
}
