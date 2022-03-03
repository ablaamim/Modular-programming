/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_nb_occurences.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:48:54 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/03 13:06:27 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

int	ft_intarray_nb_occurences(t_intarray tab, int n)
{
	int	i;
	int	occ;

	i = 0x0;
	occ = 0x0;
	while (i < tab->len)
	{
		if (tab->data[i] == n)
			occ += 0x1;
		i++;
	}
	return (occ);
}
