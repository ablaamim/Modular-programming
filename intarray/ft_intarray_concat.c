/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_concat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:15:26 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/25 12:28:29 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_concat(t_intarray t1, t_intarray t2)
{
	int			i;
	int			j;
	t_intarray	new;

	i = 0x0;
	j = 0x0;
	new = ft_intarray_create(ft_intarray_length(t1) + ft_intarray_length(t2));
	while (i < t1.len)
	{
		new.data[j++] = t1.data[i];
		i++;
	}
	i = 0x0;
	while (i < t2.len)
	{
		new.data[j++] = t2.data[i];
		i++;
	}
	return (new);
}
