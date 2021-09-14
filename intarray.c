/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:17:50 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/14 19:33:05 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	intarray_print_positive_values(int *tab, int len);

int		intarray_search(int *tab, int len, int n);

int		intarray_nb_occurences(int *tab, int len, int n);

void	intarray_debug(int *tab, int len)
{
	int	i;

	i = 0;
	printf("[");
	while (i < len - 1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("%d", tab[len - 1]);
	printf("]");
}

void	intarray_print_positive_values(int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (tab[i] >= 0)
			printf("%d ", tab[i]);
		i++;
	}
}

int		intarray_search(int *tab, int len, int n)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (tab[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int		intarray_nb_occurences(int *tab, int len, int n)
{
	int	i;
	int	occurences;

	i = 0;
	occurences = 0;
	while (i < len)
	{
		if (tab[i] == n)
		{
			occurences++;
		}
		i++;
	}
	return (occurences);
}

int	main(void)
{
	int	tab[] = {1337, 1337, 42, 42, 42, 19, -19, 1337};
	intarray_debug(tab, 8);
	printf("\n");
	printf("%d\n", intarray_nb_occurences(tab, 8, 42));
	return (EXIT_SUCCESS);
}
