/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_module_00.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:22:26 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/01 15:49:52 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

int	main(void)
{
	t_intarray	tab;

	tab = ft_intarray_create(4);
	ft_intarray_debug(tab);
	return (EXIT_SUCCESS);
}
