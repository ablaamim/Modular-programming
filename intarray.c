/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:17:50 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/14 20:54:15 by alaamimi         ###   ########.fr       */
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

void		intarray_destroy(intarray tab);

int			intarray_get(intarray tab, int index);

void		intarray_set(intarray tab, int index, int value);

int			intarray_length(intarray tab);

intarray	intarray_create(int len);

void		intarray_print_positive_values(intarray tab);

int			intarray_search(intarray tab, int n);

int			intarray_nb_occurences(intarray tab, int n);

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



int	main(void)
{
	intarray str = intarray_create(5);

	intarray_set(str, 0, 42);
	intarray_set(str, 1, -42);
	intarray_set(str, 2, 1337);
	intarray_set(str, 3, -1337);
	intarray_set(str, 4, 19);
	intarray_debug(str);
	printf("\n%d\n", intarray_get(str, 2));
	intarray_print_positive_values(str);
	printf("\n");
	intarray_destroy(str);
	return (EXIT_SUCCESS);
}
