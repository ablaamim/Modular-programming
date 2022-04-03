/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:52:25 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/03 16:52:01 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTARRAY_H
# define INTARRAY_H

# include <unistd.h>
# include <stdlib.h>

# define ENDL write(1, "\n", 1);

typedef struct s_intarray
{
	int	*data;
	int	len;
}	t_intarray;

void	ft_intarray_debug(t_intarray tab);
void	ft_putnbr(int nb);
t_intarray	ft_intarray_create(int len);
void	ft_intarray_print_positive_values(t_intarray tab);
int		ft_intarray_search(t_intarray tab, int n);
int		ft_intarray_nb_occurences(t_intarray tab, int n);

#endif
