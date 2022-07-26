/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_set.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:03:49 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/25 12:12:21 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_set(t_intarray tab, int index, int value)
{
	if (index < 0x0 || index > tab.len)
	{
		printf("Error : invalid index\n");
		return ;
	}
	tab.data[index] = value;
}
