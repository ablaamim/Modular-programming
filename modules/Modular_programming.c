/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Modular_programming.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:29:51 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/11 20:42:15 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
# define ENDL write(1, "\n", 1)

typedef struct s_intarray
{
	int	*data;
	int	len;
	int	alloc;
}	*t_intarray;

void	ft_putchar(char c){write(1, &c, 1);}
void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
void	ft_putnbr(int nb)
{
	long	nbr = nb;
	if (nbr < 0x0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr > 9){ft_putnbr(nbr / 10);}
	write(0x1, &"0123456789"[nbr % 10], 0x1);
}

void	ft_intarray_print_positive_values(t_intarray tab)
{
	int	i;

	i = 0x0;
	ft_putchar('[');
	while (i < tab->len - 1)
	{
		if (tab->data[i] >= 0x0)
		{
			ft_putnbr(tab->data[i]);
		}
		i++;
	}
	ft_putnbr(tab->data[tab->len - 0x1]);
	ft_putchar(']');
}

void	ft_intarray_debug(t_intarray tab)
{
	int	i = 0x0;

	ft_putchar('[');
	while (i < tab->len - 0x1)
	{
		ft_putnbr(tab->data[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putnbr(tab->data[tab->len - 0x1]);
	ft_putchar(']');
}

int	ft_intarray_search(t_intarray tab, int n)
{
	int	j = 0x0;
	while (j < tab->len)
	{
		if (tab->data[j] == n)
			return (0x1);
		j++;
	}
	return (0x0);
}

int	ft_intarray_nb_occurences(t_intarray tab, int value)
{
	int	i = 0x0;
	int	occurences = 0x0;
	while (i < tab->len)
	{
		if (tab->data[i] == value)
			occurences++;
		i++;
	}
	return (occurences);
}

t_intarray	ft_intarray_create(int len)
{
	int	i = 0x0;
	t_intarray create = malloc (sizeof(t_intarray));
	create->len = len;
	create->alloc = len;
	create->data = malloc (sizeof(int) * len);
	while (i < len)
	{
		create->data[i] = 0x0;
		i++;
	}
	return (create);
}

int	ft_intarray_get(t_intarray tab, int index)
{
	if (index < 0x0 || index >= tab->len)
	{
		ft_putstr("Please set a valid index : ");
		return (-1);
	}
	return (tab->data[index]);
}

void	ft_intarray_set(t_intarray tab, int index, int value)
{
	if (index < 0x0 || index >= tab->len)
	{
		ft_putstr("Please set a valid index");
		return ;
	}
	tab->data[index] = value;
}

void	ft_intarray_destroy(t_intarray tab)
{
	free(tab->data);
	free(tab);
}

int	ft_intarray_len(t_intarray tab)
{
	return (tab->len);
}

t_intarray	ft_intarray_concat(t_intarray t1, t_intarray t2)
{
	int	i = 0x0;
	int	j = 0x0;
	t_intarray	new = ft_intarray_create(t1->len + t2->len);
	while (i < t1->len)
	{
		new->data[i++] = t1->data[j];
		j++;
	}
	j = 0x0;
	while (j < t2->len)
	{
		new->data[i++] = t2->data[j];
		j++;
	}
	return (new);
}

int	ft_intarray_get_min(t_intarray tab)
{
	int	i = 0x0;
	int	min = 0x0;
	while (i < tab->len)
	{
		if (tab->data[i] < min)
			min = tab->data[i];
		i++;
	}
	return (min);
}

int	ft_get_index_of_min(t_intarray tab)
{
	int index = 0x0;
	int	index_min = 0x0;
	int	min = 0x0;
	while (index < tab->len)
	{
		if (tab->data[index] < min)
		{
			min = tab->data[index];
			index_min = index;
		}
		index++;
	}
	return (index_min);
}

void	ft_intarray_sort(t_intarray tab)
{
	int	i = 0x0;
	int	j = 0x0;
	int	tmp;
	while (i < tab->len)
	{
		j = i + 1;
		while (j < tab->len)
		{
			if (tab->data[i] > tab->data[j])
			{
				tmp = tab->data[i];
				tab->data[i] = tab->data[j];
				tab->data[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	unsorted_intarray_delete(t_intarray tab, int index)
{
	tab->data[index] = tab->data[tab->len - 1];
	tab->len--;
}

void	ft_intarray_delete(t_intarray tab, int index)
{
	int	i;

	i = index + 1;
	while (i < tab->len)
	{
		tab->data[i - 1] = tab->data[i];
		i++;
	}
	tab->len--;
}

void	ft_intarray_add(t_intarray tab, int value)
{
	if (tab->len >= tab->alloc)
		return ;
	tab->data[tab->len] = value;
	tab->len++;
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	t_intarray tab = ft_intarray_create(3);
	ft_putstr("Debugging an intarray : ");
	ft_intarray_debug(tab);
	ENDL;
	ft_putstr("Retrieving positive values : ");
	ft_intarray_print_positive_values(tab);
	ENDL;
	ft_putstr("Searching for an element inside an intarray : ");
	ft_putnbr(ft_intarray_search(tab, 0));
	ENDL;
	ft_putstr("Searching for an element inside an intarray : ");
	ft_putnbr(ft_intarray_search(tab, 555));
	ENDL;
	ft_putstr("Counting number of occurences in an intarray : ");
	ft_putnbr(ft_intarray_nb_occurences(tab, 0));
	ENDL;
	ft_putstr("Retrieve the value at the specified index : ");
	ft_putnbr(ft_intarray_get(tab, 1));
	ENDL;
	ft_intarray_set(tab, 0, 1);
	ft_intarray_set(tab, 1, -42);
	ft_intarray_set(tab, 2, 1337);
	ft_putstr("Debugging the intarray to verify set function : ");
	ft_intarray_debug(tab);
	ENDL;
	ft_putstr("Retrieve index 2 : ");
	ft_putnbr(ft_intarray_get(tab, 2));
	ENDL;
	ft_putstr("Invalid index : ");
	ft_putnbr(ft_intarray_get(tab, 0));
	ENDL;
	ft_putstr("Length of my intarray : ");
	ft_putnbr(ft_intarray_len(tab));
	ENDL;
	t_intarray tab1 = ft_intarray_create(3);
	ft_intarray_set(tab1, 0, 1);
	ft_intarray_set(tab1, 1, -1);
	ft_intarray_set(tab1, 2, -42);
	ft_intarray_debug(tab1);
	ENDL;
	t_intarray t3 = ft_intarray_concat(tab, tab1);
	ft_intarray_debug(t3);
	ENDL;
	ft_putstr("The min value of this intarray is : ");
	ft_putnbr(ft_intarray_get_min(tab));
	ENDL;
	ft_putnbr(ft_get_index_of_min(tab));
	ft_intarray_destroy(tab);
	ENDL;
	t_intarray	arr = ft_intarray_create(8);
	ft_putstr("Unsorted tab : ");
	ft_intarray_set(arr, 0, 42);
	ft_intarray_set(arr, 1, -42);
	ft_intarray_set(arr, 2, 1337);
	ft_intarray_set(arr, 3, 0);
	ft_intarray_set(arr, 4, 101);
	ft_intarray_set(arr, 5, 69);
	ft_intarray_set(arr, 6, -69);
	ft_intarray_set(arr, 7, -1337);
	ft_intarray_debug(arr);
	ENDL;
	ft_intarray_sort(arr);
	ft_putstr("Sorted tab : ");
	ft_intarray_debug(arr);
	ENDL;
	t_intarray array = ft_intarray_create(3);
	ft_intarray_set(array, 0, 1337);
	ft_intarray_set(array, 1, 42);
	ft_intarray_set(array, 2, -42);
	ft_putstr("Unsorted delete : ");
	//ft_intarray_debug(array);
	ft_intarray_delete(array, 0);
	ft_intarray_debug(array);
	ENDL;
	t_intarray add = ft_intarray_create(3);
	ft_intarray_add(add, 42);
	ft_intarray_debug(add);
	ENDL;
	return (EXIT_SUCCESS);
}
