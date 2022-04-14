/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_concat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:12:27 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/14 23:19:56 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_concat(t_intarray *t1, t_intarray *t2)
{
	t_intarray	t3;
	int			i;
	int			j;

	t3 = ft_intarray_create(ft_intarray_length(t1) + ft_intarray_length(t2));
	if (!t3.data)
		exit (EXIT_FAILURE);
	i = 0x0;
	j = 0x0;
	while (i < t1->len)
	{
		t3.data[j++] = t1->data[i];
		i++;
	}
	i = 0x0;
	while (i < t2->len)
	{
		t3.data[j++] = t2->data[i];
		i++;
	}
	return (t3);
}
