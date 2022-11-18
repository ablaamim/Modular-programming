/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:06:59 by ablaamim          #+#    #+#             */
/*   Updated: 2022/11/18 18:54:29 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTARRAY_HPP
# define INTARRAY_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

const int INTARRAY_DEFAULT_ALLOC = 1024;
const int INTHEAP_DEFAULT_ALLOC = 1024;

struct intarray
{
	int		len;             // Taille du Tabeau.
	int		*data;           // Tabeau des int.
	intarray(int len);
	intarray();          // Constructeur par default
	~intarray();
	int		get(int index);
	void	set(int index, int value);
	int		length();
	void	display();
};

#endif
