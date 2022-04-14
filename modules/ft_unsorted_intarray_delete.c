/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsorted_intarray_delete.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:34:56 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/14 22:30:19 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_unsorted_intarray_delete(t_intarray *tab, int index)
{
	if (index < 0 || (index >= tab->len))
	{
		write(2, "Error\n", 6);
		return ;
	}
	if (index != tab->len -1)
		tab->data[index] = tab->data[tab->len - 1];
	tab->len--;
}
