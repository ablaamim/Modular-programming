/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray_debug.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:52:10 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/24 11:07:32 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_intarray_debug(int *arr, int len)
{
	int	iterator;
	int	len_arr;

	if (arr == 0x0)
	{
		printf("Error\n");
		return ;
	}
	if (len <= 0x0)
	{
		printf("Error\n");
		return ;
	}
	iterator = 0x0;
	while (iterator < len - 1)
	{
		printf("%d, ", arr[iterator]);
		iterator++;
	}
	printf("%d\n", arr[iterator]);
}

int	main()
{
	int	tab[] = {0, 1, 1337, 42};

	ft_intarray_debug(NULL, 0x1);
	ft_intarray_debug(tab, 0);
	ft_intarray_debug(tab, 1);
	ft_intarray_debug(tab, 4);
	return(EXIT_SUCCESS);
}
