/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 07:25:34 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/16 09:18:25 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTARRAY_H
# define INTARRAY_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_intarray
{
	int	*data;
	int	len;
}	t_intarray;

void		ft_intarray_debug(t_intarray tab);
void		ft_putnbr(int n);
void		ft_intarray_print_positive_values(t_intarray tab);
int			ft_intarray_search(t_intarray tab, int n);
int			ft_intarray_nb_occurences(t_intarray tab, int n);
t_intarray	ft_intarray_create(int len);

#endif
