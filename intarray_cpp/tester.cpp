/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:10:40 by ablaamim          #+#    #+#             */
/*   Updated: 2022/11/16 18:48:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./intarray.hpp"

int	main(void)
{
	intarray A = intarray(10);
	for(int i = 0x0; i < A.length(); i++)
	{
		A.set(i, i * 5);
		std::cout << A.get(i) << " ";
	}
	std::cout << std::endl;
	A.display();
	std::cout << std::endl;
	intarray clone = intarray(A);
	clone.display();
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
