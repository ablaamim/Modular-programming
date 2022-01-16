/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 09:08:15 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/16 09:17:15 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_create(int len)
{
	t_intarray	tab;
	int			i;

	i = 0;
	tab.len = len;
	tab.data = malloc (sizeof(int) * len);
	while (i < len)
	{
		tab.data[i] = 0;
		i++;
	}
	return (tab);
}

int	main(void)
{
	t_intarray	tab = ft_intarray_create(8);

	ft_intarray_debug(tab);
	return (0);
}
