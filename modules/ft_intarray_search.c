/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_search.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:36:26 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/03 13:06:59 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

int	ft_intarray_search(t_intarray tab, int n)
{
	int	i;

	i = 0x0;
	while (i < tab->len)
	{
		if (tab->data[i] == n)
			return (0x1);
		i++;
	}
	return (0x0);
}