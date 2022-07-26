/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_get.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:59:57 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/25 12:10:00 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	ft_intarray_get(t_intarray tab, int index)
{
	if (index < 0 || index > tab.len)
	{
		printf("Error : invalid index\n");
		return (-1);
	}
	return (tab.data[index]);
}
