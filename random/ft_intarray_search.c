/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_search.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:32:55 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/24 12:37:16 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_intarray_search(int *tab, int len, int n)
{
	int	i;

	i = 0x0;
	while (i < len)
	{
		if (tab[i] == n)
			return (0x1);
		i++;
	}
	return (0x0);
}

int	main(void)
{
	int	tab[] = {0, 42, 1337};

	printf("%d\n", ft_intarray_search(tab, 3, 1337));
	printf("%d\n", ft_intarray_search(tab, 3, -42));
	return (EXIT_SUCCESS);
}
