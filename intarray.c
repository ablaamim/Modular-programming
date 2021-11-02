/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:12:38 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/02 13:31:14 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define FT_SUCCESS 1
#define FT_FAILURE 0
#define FT_ERROR -1

typedef struct s_intarray
{
	int	*data;
	int	len;
}	t_intarray;

void	ft_putstr(char *str);
int    ft_intarray_get_index_max_from(t_intarray tab, int n);
int    ft_intarray_get_index_min_from(t_intarray tab, int n);
int    ft_intarray_get_index_max(t_intarray tab);
int    ft_intarray_get_index_min(t_intarray tab);
void    ft_putnbr(int nb);
int    ft_intarray_nb_occurences(t_intarray tab, int n);
void    ft_intarray_destroy(t_intarray tab);
void    ft_intarray_set(t_intarray tab, int index, int value);
t_intarray    ft_intarray_concat(t_intarray T1, t_intarray T2);
int    ft_intarray_search(t_intarray tab, int n);
void    ft_intarray_print_positive_values(t_intarray tab);
t_intarray ft_intarray_create(int len);

int	ft_intarray_get_index_max_from(t_intarray tab, int n)
{
	if (n < 0 || n > tab.len)
	{
		ft_putstr("INVALID INDEX.\n");
		return (FT_ERROR);
	}
	int	max;

	max = tab.data[n];
	while (n < tab.data[n])
	{
		if (tab.data[n] > max)
			max = tab.data[n];
		n++;
	}
	return (n);
}

int	ft_intarray_get_index_min_from(t_intarray tab, int n)
{
	int	min;

	min = n;
	while (n < tab.len)
	{
		if (tab.data[n] < min)
			min = tab.data[n];
		n++;
	}
	return (n);
}

int	ft_intarray_get_index_max(t_intarray tab)
{
	int	max;
	int	i;

	i = 1;
	max = tab.data[0];
	while (i < tab.len)
	{
		if (tab.data[i] > max)
			max = tab.data[i];
		i++;
	}
	return (i);
}

int	ft_intarray_get_index_min(t_intarray tab)
{
	int	min;
	int	i;

	i = 1;
	min = tab.data[0];
	while (i < tab.data[i])
	{
		if (tab.data[i] < min)
			min = tab.data[i];
		i++;
	}
	return (i);
}

int	ft_intarray_get_max(t_intarray tab)
{
	int	max;
	int	i;

	i = 0;
	max = tab.data[0];
	while (i < tab.len)
	{
		if (tab.data[i] > max)
			max = tab.data[i];
		i++;
	}
	return (max);
}

int	ft_intarray_get_min(t_intarray tab)
{
	int	min;
	int	i;

	i = 0;
	min = tab.data[0];
	while (i < tab.len)
	{
		if (tab.data[i] < min)
			min = tab.data[i];
		i++;
	}
	return (min);
}

int	ft_intarray_length(t_intarray tab)
{
	return (tab.len);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	long	i;
	i = (long) nb;
	if (i < 0)
	{
		i = -i;
		write(1, "-", 1);
	}
	if (i > 9)
		ft_putnbr(i / 10);
	write(1, &"0123456789"[i % 10], 1);
}

t_intarray ft_intarray_create(int len)
{
	int	i;

	i = 0;
	t_intarray tab;
	tab.len = len;
	tab.data = malloc (len * sizeof (int));
	while (i < len)
	{
		tab.data[i] = 0;
		i++;
	}
	return (tab);
}

void	ft_intarray_debug(t_intarray tab)
{
	int	i;

	i = 0;
	write(1, "[", 1);
	while (i < tab.len - 1)
	{
		ft_putnbr(tab.data[i]);
		write(1, ", ", 2);
		i++;
	}
	ft_putnbr(tab.data[tab.len - 1]);
	write(1, "]", 1);
}

void	ft_intarray_print_positive_values(t_intarray tab)
{
	int	i;

	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] > 0)
		{
			ft_putnbr(tab.data[i]);
			write(1, " ", 1);
		}
		i++;
	}
}

int	ft_intarray_search(t_intarray tab, int n)
{
	int	i;

	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			return (FT_SUCCESS);
		i++;
	}
	return (FT_FAILURE);
}

void	ft_intarray_destroy(t_intarray tab)
{
	free (tab.data);
}

int	ft_intarray_get(t_intarray tab, int index)
{
	if (index < 0 || index > tab.len)
	{
		ft_putstr("INVALID INDEX.\n");
		return (FT_ERROR);
	}
	return (tab.data[index]);
}

int	ft_intarray_nb_occurences(t_intarray tab, int n)
{
	int	i;
	int	occ;

	i = 0;
	occ = 0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			occ++;
		i++;
	}
	return(occ);
}

void	ft_intarray_set(t_intarray tab, int index, int value)
{
	if (index < 0 || index > tab.len)
	{
		ft_putstr("INVALID INDEX.\n");
		return ;
	}
	tab.data[index] = value;
}

t_intarray	ft_intarray_concat(t_intarray T1, t_intarray T2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	t_intarray T = ft_intarray_create(T1.len + T2.len);
	while (i < T1.len)
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

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int	n;

	t_intarray str = ft_intarray_create(8);
	t_intarray str1 = ft_intarray_create(5);
	ft_intarray_set(str1, 0, 101);
	ft_intarray_set(str1, 4, 69);
	ft_intarray_set(str, 0, 42);
	ft_intarray_set(str, 1, -42);
	ft_intarray_set(str, 2, 69);
	ft_intarray_set(str, 7, 1337);
	ft_intarray_set(str, 3, 101);
	ft_intarray_set(str, 4, 19);
	ft_intarray_set(str, 5, -19);
	ft_intarray_debug(str);
	write(1, "\n", 1);
	ft_intarray_debug(str1);
	write(1, "\n" ,1);
	n = ft_intarray_get(str, 42);
	ft_putnbr(n);
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_length(str));
	write(1, "\n", 1);
	ft_intarray_debug(ft_intarray_concat(str1, str));
	write(1, "\n", 1);
	ft_intarray_debug(ft_intarray_concat(str, str1));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_length(str));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_length(str1));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_min(str));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_max(str));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_index_min(str));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_index_max(str));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_index_min_from(str, 4));
	write(1, "\n", 1);
	ft_putnbr(ft_intarray_get_index_max_from(str, -1));
	write(1, "\n", 1);
	ft_intarray_destroy(str1);
	ft_intarray_destroy(str);
	return (EXIT_SUCCESS);
}
