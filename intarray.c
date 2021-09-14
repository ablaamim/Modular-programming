/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:17:50 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/14 20:02:03 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef  struct intarray intarray;

struct	intarray
{
	int	*data;
	int len;
};

intarray	intarray_create(int len);

void		intarray_print_positive_values(int *tab, int len);

int			intarray_search(int *tab, int len, int n);

int			intarray_nb_occurences(int *tab, int len, int n);

intarray	intarray_create(int len)
{
	intarray tab;
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

void		intarray_debug(int *tab, int len)
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
	intarray str = intarray_create(10);
	intarray_debug(str.data, 10);
	printf("\n");
	return (EXIT_SUCCESS);
}
