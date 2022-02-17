/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:25:47 by ablaamim          #+#    #+#             */
/*   Updated: 2022/02/16 18:26:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_add(t_intarray tab, int value)
{
	if (tab->len >= tab->alloc)
	{
		write(2, "Error : Not enough space allocated\n", 35);
		return;
	}
	tab->data[tab->len] = value;
	tab->len++;
}

int	main(void)
{
	t_intarray tab;

	tab = ft_intarray_create(4);
	ft_intarray_set(tab, 0, 0);
	ft_intarray_set(tab, 1, 1);
	ft_intarray_set(tab, 2, 42);
	ft_intarray_set(tab, 3, 1337);
	ft_intarray_debug(tab);
	write(1, "\n", 1);
	ft_intarray_add(tab, -42);
	ft_intarray_debug(tab);
	write(1, "\n", 1);
	ft_intarray_sort(tab);
	ft_intarray_debug(tab);
	write(1, "\n", 1);
	ft_intarray_destroy(tab);
	return (EXIT_SUCCESS);
}
