/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_print_positive_values.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:30:08 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/24 12:32:26 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_intarray_print_positive_values(int *tab, int len)
{
	int	i;

	i = 0x0;
	while (i < len)
	{
		if (tab[i] >= 0x0)
			printf("%d ", tab[i]);
		i++;
	}
}

int	main(void)
{
	int	tab[] = {0, -42, 1337, 42, -1337};

	ft_intarray_print_positive_values(tab, 5);
	return (EXIT_SUCCESS);
}
