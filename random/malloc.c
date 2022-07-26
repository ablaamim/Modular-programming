/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:09:13 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/24 11:43:26 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	n;
	int	*tab;
	int	i;

	i = 0x0;
	scanf("%d", &n);
	tab = malloc(sizeof(int) * n);
	while (i < n)
	{
		tab[i] = 0x0;
		i++;
	}
	i = 0x0;
	while (i < n - 1)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("%d", tab[i - 1]);
	return (EXIT_SUCCESS);
}
