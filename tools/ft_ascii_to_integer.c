/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascii_to_integer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:07:49 by ablaamim          #+#    #+#             */
/*   Updated: 2022/02/14 06:32:39 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	ft_ascii_to_integer(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str >= 7 && *str <= 13)
		str++;
	if (*str == '-')
		sign = -1;
	while (*str == '+' || *str == '-')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		res = (res * 10) + *str- 48;
		str++;
	}
	return (res * sign);
}
