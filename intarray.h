/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:42:03 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 18:29:56 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTARRAY_H
#define INTARRAY_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_intarray
{
	int	*data;
	int	len;
} t_intarray;

void		ft_intarray_debug(t_intarray tab);
void		ft_print_numbers(int n);
void		ft_putchar(char c);
t_intarray	ft_intarray_create(int len);
int			ft_intarray_nb_occurence(t_intarray tabb, int n);
void		ft_intarray_print_positive_values(t_intarray tab);
int			ft_intarray_search(t_intarray tab, int n);
void		ft_intarray_destroy(t_intarray tab);
int			ft_intarray_get(t_intarray tab, int index);
int			ft_intarray_len(t_intarray tab);
void		ft_intarray_set(t_intarray tab, int index, int value);
t_intarray	ft_intarray_concat(t_intarray s1, t_intarray s2);
int			ft_intarray_get_min(t_intarray tab);
int			ft_intarray_max(t_intarray tab);
void		ft_intarray_swap(int a, int b);
void		ft_intarray_sort1(t_intarray tab);
int			ft_intarray_sum(t_intarray tab);

#endif
