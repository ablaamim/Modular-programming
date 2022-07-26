/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:54:00 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/24 13:11:12 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_intarray
{
	int	*data;
	int	len;
}	t_intarray;

void	ft_intarray_debug(t_intarray tab)
{
	int	i;

	i = 0x0;
	while (i < tab.len - 1)
	{
		printf("%d ", tab.data[i]);
		i++;
	}
	printf("%d", tab.data[tab.len]);
}

t_intarray	ft_intarray_create(int len)
{
	t_intarray	tab;
	int			i;

	tab.len = len;
	tab.data = malloc(sizeof(int) * len);
	i = 0x0;
	while (i < len - 1)
	{
		tab.data[i] = 0x0;
		i++;
	}
	return (tab);
}

int	main(void)
{
	t_intarray	tab = ft_intarray_create(4);

	ft_intarray_debug(tab);
	return (EXIT_SUCCESS);
}
