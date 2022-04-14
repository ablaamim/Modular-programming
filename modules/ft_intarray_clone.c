/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_clone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:45:51 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/14 23:30:25 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_clone(t_intarray *tab)
{
	t_intarray	clone;
	int			i;

	i = 0x0;
	clone = ft_intarray_create(tab->len);
	while (i < tab->len)
	{
		clone.data[i] = tab->data[i];
		i++;
	}
	return (clone);
}
