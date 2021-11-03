/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:15:05 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/03 09:18:43 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "tools.h"

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	printf("%d\n", ft_atoi("-42"));
	printf("%d\n", ft_atoi("\t  1337"));
	return (EXIT_SUCCESS);
}
