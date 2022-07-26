/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:13:28 by ablaamim          #+#    #+#             */
/*   Updated: 2022/07/26 19:03:30 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTARRAY_H
# define INTARRAY_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_intarray
{
	int	*data;
	int	len;
}	t_intarray;

t_intarray	ft_intarray_create(int len);
void		ft_intarray_debug(t_intarray tab);
void		ft_intarray_print_positive_values(t_intarray tab);
int			ft_intarray_search(t_intarray tab, int n);
int			ft_intarray_nb_occurences(t_intarray tab, int n);
int			ft_intarray_get(t_intarray tab, int index);
void		ft_intarray_set(t_intarray tab, int index, int value);
int			ft_intarray_length(t_intarray tab);
t_intarray	ft_intarray_concat(t_intarray t1, t_intarray t2);
int			ft_intarray_get_min(t_intarray tab);
int			ft_intarray_get_max(t_intarray tab);
int			ft_intarray_get_index_of_min(t_intarray tab);
int			ft_intarray_get_index_of_max(t_intarray tab);
void		ft_intarray_selection_sort(t_intarray tab);

#endif
