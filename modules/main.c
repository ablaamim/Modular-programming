/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:18:25 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/01 16:19:19 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	main(void)
{
	t_intarray tab;

	tab = ft_intarray_create(4);
	ft_intarray_debug(tab);
	ENDL;
	return (EXIT_SUCCESS);
}
