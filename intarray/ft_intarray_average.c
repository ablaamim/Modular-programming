/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_average.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:04:35 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/01 09:38:17 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"intarray.h"

int	ft_intarray_average(t_intarray tab)
{
	int	i;
	int	average;

	i = 0;
	average = 0;
	while (i < tab->len)
	{
		average += tab->data[i];
		i++;
	}
	average /= tab->len;
	return (average);
}
