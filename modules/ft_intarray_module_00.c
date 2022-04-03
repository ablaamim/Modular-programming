/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_module_00.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:22:26 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/03 16:30:52 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define ENDL write(1, "\n", 1);

typedef struct s_intarray
{
	int	*data;
	int	len;
}	t_intarray;

void	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

t_intarray	ft_intarray_create(int len)
{
	t_intarray	tab;
	int			i;

	tab.len = len;
	tab.data = malloc (sizeof(int) * len);
	i = 0;
	while (i < len)
	{
		tab.data[i] = 0x0;
		i++;
	}
	return (tab);
}

void	ft_intarray_print_positive_values(t_intarray tab)
{
	int	i;

	i = 0x0;
	while (i < tab.len)
	{
		if (tab.data[i] >= 0)
			ft_putnbr(tab.data[i]);
		i++;
	}
}

void	ft_intarray_debug(t_intarray tab)
{
	int	i;

	i = 0x0;
	while (i < tab.len)
	{
		ft_putnbr(tab.data[i]);
		i++;
	}
}

int	ft_intarray_search(t_intarray tab, int n)
{
	int	i;

	i = 0x0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int	ft_intarray_nb_occurences(t_intarray tab, int n)
{
	int	i;
	int	occ;

	occ = 0x0;
	i = 0x0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			occ++;
		i++;
	}
	return (occ);
}

int	main(void)
{
	t_intarray	tab;

	tab = ft_intarray_create(4);
	ft_intarray_debug(tab);
	ENDL;
	ft_intarray_print_positive_values(tab);
	ENDL;
	ft_putnbr(ft_intarray_search(tab, 0));
	ENDL;
	ft_putnbr(ft_intarray_nb_occurences(tab, 0));
	ENDL;
	return (EXIT_SUCCESS);
}
