/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_concat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:51:30 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/03 13:04:12 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

t_intarray	ft_intarray_concat(t_intarray t1, t_intarray t2)
{
	int			i;
	int			j;
	t_intarray	t3;

	t3 = ft_intarray_create(ft_intarray_len(t1) + ft_intarray_len(t2));
	i = 0;
	while (i < t1->len)
	{
		t3->data[i] = t1->data[i];
		i++;
	}
	j = i;
	while (j < t2->len)
	{
		t3->data[j] = t2->data[j];
		j++;
	}
	return (t3);
}
