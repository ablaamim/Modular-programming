/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascii_to_integer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:59:34 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 18:26:50 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_ascii_to_integer(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + *str - 48;
		str++;
	}
	return (sign * res);
}
