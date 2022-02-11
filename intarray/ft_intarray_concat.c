/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_concat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:51:30 by ablaamim          #+#    #+#             */
/*   Updated: 2022/02/09 15:42:52 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_concat(t_intarray T1, t_intarray T2)
{
	int			i;
	int			j;
	t_intarray	T3;

	i = 0;
	while (i < T1.len)
	{
		T3.data[i] = T1.data[i];
		i++;
	}
	j = i;
	while (j < T2.len)
	{
		T3.data[j] = T2.data[j];
		j++;
	}
	return (T3);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	t_intarray T1 = ft_intarray_create(2);
	t_intarray T2 = ft_intarray_create(2);

	ft_intarray_set(T1, 0, 1337);
	ft_intarray_set(T1, 1, 42);
	ft_intarray_set(T2, 0, 0);
	ft_intarray_set(T2, 1, -42);
	ft_intarray_debug(T1);
	write(1, "\n" , 1);
	ft_intarray_debug(T2);
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_len(T1));
	write(1, "\n", 1);
	ft_intarray_debug(ft_intarray_concat(T1, T2));
	return (EXIT_SUCCESS);
}
