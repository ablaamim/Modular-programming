/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:10:16 by ablaamim          #+#    #+#             */
/*   Updated: 2022/11/16 18:53:36 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./intarray.hpp"

intarray::intarray(const intarray &A)
{
	this->len = A.len;
	this->data = new int[A.len];
	for (int i = 0x0; i < A.len; i++)
		this->data[i] = A.data[i];
}

intarray::intarray()
{
	this->data = new int[INTARRAY_DEFAULT_ALLOC];
}

intarray::intarray(int len)
{
	this->len = len;
	this->data = new int[len];
}

intarray::~intarray()
{
	delete[] this->data;
}

int	intarray::get(int index)
{
	return (this->data[index]);
}

void	intarray::set(int index, int val)
{
	this->data[index] = val;
}

int	intarray::length()
{
	return (this->len);
}

void	intarray::display()
{
	for (int i = 0x0; i < this->len - 1; i++)
		std::cout << this->data[i] << ", ";
	std::cout << this->data[this->len - 1];
}

intarray intarray::intarray_clone()
{
	intarray clone = intarray(this->len);
	for(int i = 0x0; i < this->len; i++)
		clone.data[i] = this->data[i];
	return (clone);
}
