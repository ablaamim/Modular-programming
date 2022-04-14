/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_empty_intarray_create.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:38:38 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/14 23:52:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_empty_intarray_create(int alloc)
{
	int			i;
	t_intarray	tab;

	i = 0x0;
	tab.data = malloc (sizeof(t_intarray));
	tab.len = 0x0;
	tab.alloc = alloc;
	tab.data = malloc (tab.alloc * sizeof(int));
	while (i < tab.alloc)
	{
		tab.data[i] = 0x0;
		i++;
	}
	return (tab);
}
