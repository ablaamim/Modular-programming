/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:15:56 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/14 22:23:28 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_create(int len)
{
	t_intarray	tab;
	int			i;

	i = 0x0;
	tab.len = len;
	tab.alloc = len;
	tab.data = malloc (sizeof(int) * len);
	while (i < tab.len)
	{
		tab.data[i] = 0x0;
		i++;
	}
	return (tab);
}
