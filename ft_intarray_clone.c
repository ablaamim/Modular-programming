/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_clone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:11:56 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 20:17:53 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_clone(t_intarray tab)
{
	t_intarray	copy;
	int			i;

	i = 0;
	copy = ft_intarray_create(tab.len);
	while (i < tab.len)
	{
		copy.data[i] = tab.data[i];
		i++;
	}
	return (copy);
}
