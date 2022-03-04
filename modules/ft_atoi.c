/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:51:03 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/04 11:53:54 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0x0;
	sign = 0x1;
	while (*str >= 7 && *str <= 14)
		str++;
	if (*str == '-')
		sign *= -1;
	while (*str == '+' || *str == '-')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + *str - 48;
		str++;
	}
	return (res * sign);
}
