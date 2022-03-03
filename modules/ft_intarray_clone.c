/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_clone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:54:04 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/03 13:03:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

t_intarray	ft_intarray_clone(t_intarray tab)
{
	t_intarray	copy;
	int			i;

	i = 0;
	copy = ft_intarray_create(tab->len);
	while (i < tab->len)
	{
		copy->data[i] = tab->data[i];
		i++;
	}
	return (copy);
}
