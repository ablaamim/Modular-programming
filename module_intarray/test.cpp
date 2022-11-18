/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:12:39 by ablaamim          #+#    #+#             */
/*   Updated: 2022/11/18 18:58:56 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./intarray.hpp"

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	intarray arr = intarray(15);
	for (int i = 0x0; i < arr.length(); i++)
	{
		arr.set(i, i * 5);
		std::cout << arr.get(i) << " ";
	}
	std::cout << std::endl;
	arr.display();
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
