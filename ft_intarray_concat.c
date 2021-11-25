/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_concat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:29:33 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 16:00:16 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_concat(t_intarray T1, t_intarray T2)
{
	int	i;
	int	j;
	t_intarray T = ft_intarray_create(T1.len + T2.len);
	i = 0;
	j = 0;
	
	while (j < T1.len)
	{
		T.data[i] = T1.data[j];
		i++;
		j++;
	}
	j = 0;
	while (j < T2.len)
	{
		T.data[i] = T2.data[j];
		i++;
		j++;
	}
	return (T);
}

int	main(void)
{
	t_intarray T1 = ft_intarray_create(10);
	t_intarray T2 = ft_intarray_create(5);
	ft_intarray_set(T1, 0, 42);
	ft_intarray_set(T1, 5, 1337);
	ft_intarray_set(T1, 9, 69);
	ft_intarray_debug(T1);
	ft_putchar('\n');
	ft_intarray_set(T2, 0, -1337);
	ft_intarray_set(T2, 1, -69);
	ft_intarray_set(T2, 4, 404);
	ft_intarray_debug(T2);
	ft_putchar('\n');
	ft_intarray_debug(ft_intarray_concat(T1, T2));
}
