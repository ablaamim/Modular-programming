/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:12:38 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/03 10:54:59 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	ft_intarray_clone(t_intarray tab)
{
	int	i;

	i = 0;
	t_intarray copy = ft_intarray_create(tab.len);
	while (i < tab.len)
	{
		copy.data[i] = tab.data[i];
		i++;
	}
	return (copy);
}

float	ft_intarray_median(t_intarray tab)
{
	int			v1;
	int			v2;
	float		median;
	t_intarray	copy;

	copy = ft_intarray_clone(tab);
	v1 = tab.data[(tab.len - 1) / 2];
	v2 = tab.data[tab.len / 2];
	ft_intarray_sort1(tab);
	if (tab.len % 2 == 1)
		return (tab.data[(tab.len - 1) / 2]);
	else
		median = (v1 + v2) / 2.0;
	ft_intarray_destroy(copy);
	return (median);
}

float	ft_intarray_average(t_intarray tab)
{
	int		sum;
	float	average;
	sum = ft_intarray_sum(tab);
	average = (sum * 1.0) / tab.len;
	return (average);
}

int	ft_intarray_sum(t_intarray tab)
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (i < tab.len)
	{
		sum += tab.data[i];
		i++;
	}
	return (sum);
}

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

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_intarray_sort1(t_intarray tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < tab.len)
	{
		j = i + 1;
		while (j < tab.len)
		{
			if (tab.data[i] > tab.data[j])
				ft_swap(&tab.data[i], &tab.data[j]);
			j++;
		}
		i++;
	}
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
