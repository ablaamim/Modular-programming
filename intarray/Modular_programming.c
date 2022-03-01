/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Modular_programming.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:29:51 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/01 09:32:14 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
# define ENDL write(1, "\n", 1)

typedef struct s_intarray
{
	int	*data;
	int	len;
}	*t_intarray;

void	ft_putchar(char c){write(1, &c, 1);}
void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

void	ft_intarray_debug(t_intarray tab)
{
	int	i = 0x0;

	ft_putchar('[');
	while (i < tab->len - 1)
	{
		ft_putnbr(tab->data[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putnbr(tab->data[tab->len - 1]);
	ft_putchar(']');
}

t_intarray	ft_intarray_create(int len)
{
	int	i = 0x0;

	t_intarray	tab = malloc (sizeof(t_intarray));
	tab->len = len;
	tab->data = malloc(sizeof(int) * len);
	while (i < len)
	{
		tab->data[i] = 0x0;
		i++;
	}
	return (tab);
}

void	ft_intarray_print_positive_values(t_intarray tab)
{
	int	i = 0x0;
	ft_putchar('[');
	while (i < tab->len - 1)
	{
		if (tab->data > 0)
		{
			ft_putnbr(tab->data[i]);
			ft_putstr(", ");
		}
		i++;
	}
	ft_putnbr(tab->data[tab->len - 1]);
	ft_putchar(']');
}

int	ft_intarray_search(t_intarray tab, int value)
{
	int	i = 0x0;

	while (i < tab->len)
	{
		if (tab->data[i] == value)
			return (0x1);
		i++;
	}
	return (0x0);
}

int	main(int argc, char **argv)
{
	(void)	argv;
	(void)	argc;
	t_intarray	tab = ft_intarray_create(4);
	ft_intarray_debug(tab);
	ENDL;
	ft_intarray_print_positive_values(tab);
	ENDL;
	ft_putnbr(ft_intarray_search(tab, 0));
	ENDL;
	ft_putnbr(ft_intarray_search(tab, 1));
	ENDL;
	return (EXIT_SUCCESS);
}
