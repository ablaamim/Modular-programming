/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:11:06 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/03 13:08:03 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modules.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}