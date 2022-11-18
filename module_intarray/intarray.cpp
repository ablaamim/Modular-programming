/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:12:23 by ablaamim          #+#    #+#             */
/*   Updated: 2022/11/18 18:56:15 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./intarray.hpp"

void	intarray::display()
{
	for (int i = 0x0; i < this->len - 1; i++)
		std::cout << this->data[i] << " ";
	std::cout <<this->data[this->len - 1];
}

int	intarray::length()
{
	return (this->len);
}

intarray::intarray()
{
	this->len = INTARRAY_DEFAULT_ALLOC;
	this->data = new int[INTARRAY_DEFAULT_ALLOC];
}

intarray::intarray(int len)
{
	this->len = len;
	this->data = new int[len];
}

int intarray::get(int index)
{
	return (this->data[index]);
}

intarray::~intarray()
{
	delete this->data;
}

void intarray::set(int index, int value)
{
	this->data[index] = value;
}
