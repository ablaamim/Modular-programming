/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:10:24 by ablaamim          #+#    #+#             */
/*   Updated: 2022/11/16 18:51:03 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTARRAY_HPP
# define INTARRAY_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

const int INTARRAY_DEFAULT_ALLOC = 1024;
const int INTHEAP_DEFAULT_ALLOC = 1024;

class intarray
{
	private :
		int			len;
		int			*data;
	public :
		intarray();
		intarray(int len);
		intarray(const intarray &A);
		~intarray();
		int			get(int index);
		void		set(int index, int val);
		int			length();
		void		display();
		intarray	intarray_clone();
};

#endif
