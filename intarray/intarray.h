/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 07:25:34 by ablaamim          #+#    #+#             */
/*   Updated: 2022/02/11 16:02:46 by ablaamim         ###   ########.fr       */
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
int			ft_intarray_get(t_intarray tab, int index);
void		ft_intarray_set(t_intarray tab, int index, int value);
int			ft_intarray_len(t_intarray tab);
t_intarray	ft_intarray_concat(t_intarray T1, t_intarray T2);
void		ft_intarray_destroy(t_intarray tab);
int			ft_ascii_to_int(char *str);
int			ft_intarray_sum(t_intarray tab);
#endif
