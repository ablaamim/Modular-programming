/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_sum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:56:42 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/03 13:07:44 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"modules.h"

int	ft_intarray_sum(t_intarray tab)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < tab->len)
	{
		sum += tab->data[i];
		i++;
	}
	return (sum);
}
