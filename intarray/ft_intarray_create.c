/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:30:52 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/25 08:55:25 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_create(int len)
{
	t_intarray	tab;
	int			i;

	i = 0x0;
	if (len < 0x0)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	tab.len = len;
	tab.data = malloc(sizeof(int) * len);
	if (tab.data == 0x0)
		exit(EXIT_FAILURE);
	while (i < tab.len)
	{
		tab.data[i] = 0x0;
		i++;
	}
	return (tab);
}
