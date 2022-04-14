/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:04:57 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/14 22:29:29 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_add(t_intarray *tab, int value)
{

	if (tab->len >= tab->alloc)
	{
		write(2, "Error\n", 6);
		return ;
	}
	tab->data[tab->len] = value;
	tab->len++;
}
