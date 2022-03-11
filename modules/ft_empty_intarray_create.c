/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_empty_intarray_create.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:45:52 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/11 20:51:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

t_intarray	ft_empty_intarray_create(int alloc)
{
	t_intarray	tab;
	int	i;

	i = 0x0;
	tab = malloc (sizeof(t_intarray));
	tab->len = 0x0;
	tab->alloc = alloc;
	tab->data = malloc (sizeof (int) * tab->alloc);
	while (i < tab->alloc)
	{
		tab->data[i] = 0x0;
		i++;
	}
	return (tab);
}
