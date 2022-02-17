/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_concat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:51:30 by ablaamim          #+#    #+#             */
/*   Updated: 2022/02/17 15:49:48 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_concat(t_intarray T1, t_intarray T2)
{
	int			i;
	int			j;
	t_intarray	T3;

	T3 = ft_intarray_create(ft_intarray_len(T1) + ft_intarray_len(T2));
	i = 0;
	while (i < T1->len)
	{
		T3->data[i] = T1->data[i];
		i++;
	}
	j = i;
	while (j < T2->len)
	{
		T3->data[j] = T2->data[j];
		j++;
	}
	return (T3);
}
