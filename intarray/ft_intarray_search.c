/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_search.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:36:26 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/16 09:20:21 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_search(t_intarray tab, int n)
{
	int	i;

	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			return (1);
		i++;
	}
	return (0);
}
