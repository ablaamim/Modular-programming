/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:14:00 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/03 10:44:03 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTARRAY_H
# define INTARRAY_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# define FT_SUCCESS 1
# define FT_FAILURE 0
# define FT_ERROR -1
#endif

typedef struct	s_intarray
{
	int	*data;
	int	len;
}    t_intarray;

float		ft_intarray_median(t_intarray tab);
float		ft_intarray_average(t_intarray tab);
int			ft_intarray_sum(t_intarray tab);
int			ft_intarray_get(t_intarray tab, int index);
void		ft_intarray_debug(t_intarray tab);
void		ft_putstr(char *str);
int			ft_intarray_get_index_max_from(t_intarray tab, int n);
int			ft_intarray_get_index_min_from(t_intarray tab, int n);
int			ft_intarray_get_index_max(t_intarray tab);
int			ft_intarray_get_index_min(t_intarray tab);
void		ft_putnbr(int nb);
int			ft_intarray_nb_occurences(t_intarray tab, int n);
void		ft_intarray_destroy(t_intarray tab);
void		ft_intarray_set(t_intarray tab, int index, int value);
t_intarray	ft_intarray_concat(t_intarray T1, t_intarray T2);
int			ft_intarray_search(t_intarray tab, int n);
void		ft_intarray_print_positive_values(t_intarray tab);
t_intarray	ft_intarray_create(int len);
void		ft_intarray_sort1(t_intarray tab);
void		ft_swap(int *a, int *b);
int			ft_intarray_get_max(t_intarray tab);
int			ft_intarray_get_min(t_intarray tab);
int			ft_intarray_length(t_intarray tab);
