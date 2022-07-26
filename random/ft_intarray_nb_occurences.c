/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_nb_occurences.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:46:34 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/24 12:51:13 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_intarray_nb_occurences(int *tab, int len, int n)
{
	int	i;
	int	occ;

	i = 0x0;
	occ = 0x0;
	while (i < len)
	{
		if (tab[i] == n)
			occ++;
		i++;
	}
	return (occ);
}

int	main(void)
{
	int	tab[] = {0, 1337, 0, 1337, 42, 42, -42, 42};

	printf("%d\n", ft_intarray_nb_occurences(tab, 8, 42));
	printf("%d\n", ft_intarray_nb_occurences(tab, 8, 0));
	printf("%d\n", ft_intarray_nb_occurences(tab, 8, 101));
	return (EXIT_SUCCESS);
}
