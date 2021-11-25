/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_nb_occurence.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:49:28 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 14:18:15 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_nb_occurence(t_intarray tab, int n)
{
	int	i;
	int	occ;

	i = 0;
	occ = 0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			occ++;
		i++;
	}
	return (occ);
}
