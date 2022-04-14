/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_sum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:56:41 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/14 23:25:33 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_sum(t_intarray *tab)
{
	int	sum;
	int	i;

	sum = 0x0;
	i = 0x0;
	while (i < tab->len)
	{
		sum += tab->data[i];
		i++;
	}
	return (sum);
}
