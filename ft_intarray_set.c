/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_set.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:29:58 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 14:38:14 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_set(t_intarray tab, int index, int value)
{
	int	i;

	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] == tab.data[index])
			tab.data[i] = value;
		i++;
	}
}

int	main(void)
{
	t_intarray tab = ft_intarray_create(5);
	ft_intarray_debug(tab);
	ft_putchar('\n');
	ft_intarray_set(tab, 0, 42);
	ft_intarray_set(tab, 1, 1337);
	ft_intarray_set(tab, 2, -42);
	ft_intarray_set(tab, 3, -1337);
	ft_intarray_set(tab, 4, 69);
	ft_intarray_debug(tab);
	ft_putchar('\n');
}
