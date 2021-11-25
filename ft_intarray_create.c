/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:57:25 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 14:12:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_create(int len)
{
	t_intarray	tab;
	int	i;

	i = 0;
	tab.len = len;
	tab.data = malloc(sizeof(int) * len);
	while (i < tab.len)
	{
		tab.data[i] = 0;
		i++;
	}
	return (tab);
}
