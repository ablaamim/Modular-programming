/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:47:14 by ablaamim          #+#    #+#             */
/*   Updated: 2022/02/07 15:20:36 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_sort(t_intarray tab)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < tab.len)
	{
		j = i + 1;
		while (j < tab.len)
		{
			if (tab.data[i] > tab.data[j])
			{
				tmp = tab.data[i];
				tab.data[i] = tab.data[j];
				tab.data[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	t_intarray tab = ft_intarray_create(4);
	ft_intarray_set(tab, 0, 42);
	ft_intarray_set(tab, 1, -42);
	ft_intarray_set(tab, 2, 1337);
	ft_intarray_set(tab, 3, 0);
	ft_intarray_set(tab, 4, 101);
	ft_intarray_debug(tab);
	write(1, "\n", 1);
	ft_intarray_sort(tab);
	ft_intarray_debug(tab);
	return (EXIT_SUCCESS);
}
