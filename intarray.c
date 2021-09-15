/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:17:50 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/15 16:31:33 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "intarray.h"

void	intarray_sort(intarray tab)
{
	int	cmp1;
	int	cmp2;
	int tmp;

	cmp1 = 0;
	while (cmp1 < tab.len)
	{
		cmp2 = cmp1 + 1;
		while (cmp2 < tab.len)
		{
			if (tab.data[cmp2] < tab.data[cmp1])
			{
				tmp = tab.data[cmp1];
				tab.data[cmp1] = tab.data[cmp2];
				tab.data[cmp2] = tmp;
			}
			cmp2++;
		}
		cmp1++;
	}
}

int	intarray_sum(intarray tab)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < tab.len)
	{
		sum += tab.data[i];
		i++;
	}
	return (sum);
}

void	intarray_sort1(intarray tab)
{
	int	i;
	int	index_min;
	int	tmp;

	i = 0;
	while (i < tab.len - 1)
	{
		index_min = intarray_get_index_of_min_from(tab, i);
		tmp = tab.data[i];
		tab.data[i] = tab.data[index_min];
		tab.data[index_min] = tmp;
		i++;
	}
}

int	intarray_get_index_of_min_from(intarray tab, int n)
{
	int	i;
	int	index_min;
	int min;

	i = n + 1;
	index_min = n;
	min = tab.data[n];
	while (i < tab.len)
	{
		if (tab.data[i] < min)
		{
			min = tab.data[i];
			index_min = i;
		}
		i++;
	}
	return (index_min);
}

int	intarray_get_index_of_min(intarray tab)
{
	int	i;
	int	min;
	int	index_min;

	min = tab.data[0];
	i = 1;
	index_min = 0;
	while (i < tab.len)
	{
		if (tab.data[i] < min)
		{
			min = tab.data[i];
			index_min = i;
		}
		i++;
	}
	return (index_min);
}

void	intarray_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	intarray_get_min(intarray tab)
{
	int	i;
	int min;

	i = 1;
	min = tab.data[0];
	while (i < tab.len)
	{
		if (tab.data[i] < min)
			min = tab.data[i];
		i++;
	}
	return (min);
}

intarray	intarray_concat(intarray T1, intarray T2)
{
	intarray	T = intarray_create(T1.len + T2.len);
	int	i;
	int j;

	i = 0;
	j = 0;
	while(i < T1.len)
	{
		T.data[j] = T1.data[i];
		i++;
		j++;
	}
	i = 0;
	while (i < T2.len)
	{
		T.data[j] = T2.data[i];
		i++;
		j++;
	}
	return (T);
}

int			intarray_length(intarray tab)
{
	return (tab.len);
}

void	intarray_set(intarray tab, int index, int value)
{
	if ((index < 0) || (index > tab.len))
	{
		printf("ERROR\n");
		return ;
	}
	tab.data[index] = value;
}

void	intarray_destroy(intarray tab)
{
	free(tab.data);
}

int		intarray_get(intarray tab, int index)
{
	if ((index < 0) || (index >= tab.len))
	{
		printf("\nERROR");
		return (-1);
	}
	return (tab.data[index]);
}

intarray	intarray_create(int len)
{
	intarray	tab;
	int			i;

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

void		intarray_debug(intarray tab)
{
	int	i;

	i = 0;
	printf("[");
	while (i < tab.len - 1)
	{
		printf("%d, ", tab.data[i]);
		i++;
	}
	printf("%d", tab.data[tab.len - 1]);
	printf("]");
}

void	intarray_print_positive_values(intarray tab)
{
	int	i;

	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] >= 0)
			printf("%d ", tab.data[i]);
		i++;
	}
}

int		intarray_search(intarray tab, int n)
{
	int	i;

	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int		intarray_nb_occurences(intarray tab, int n)
{
	int	i;
	int	occurences;

	i = 0;
	occurences = 0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
		{
			occurences++;
		}
		i++;
	}
	return (occurences);
}
