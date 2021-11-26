/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_delete.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:55:56 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/26 18:41:55 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_delete(t_intarray *tab, int index)
{
	if (index != tab->len - 1)
	{
		tab->data[index] = tab->data[tab->len - 1];
	}
	tab->len--;
}
