/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_debug.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:33:41 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/25 12:27:07 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_debug(t_intarray tab)
{
	int	i;

	i = 0x0;
	if (tab.data == 0x0)
		return ;
	while (i < tab.len - 1)
	{
		printf("%d ", tab.data[i]);
		i++;
	}
	printf("%d", tab.data[tab.len - 1]);
}
