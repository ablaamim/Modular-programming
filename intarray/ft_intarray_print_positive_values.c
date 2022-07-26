/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_print_positive_values.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:44:21 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/25 11:55:25 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_print_positive_values(t_intarray tab)
{
	int	i;

	i = 0x0;
	while (i < tab.len)
	{
		if (tab.data[i] >= 0x0)
			printf("%d ", tab.data[i]);
		i++;
	}
}
