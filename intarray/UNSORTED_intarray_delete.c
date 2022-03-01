/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_slow_delete.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:29:16 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/01 09:44:55 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	unsorted_ft_intarray_delete(t_intarray tab, int index)
{
	if (index != tab->len - 1)
	{
		tab->data[index] = tab->data[tab->len - 1];
	}
	tab->len--;
}
