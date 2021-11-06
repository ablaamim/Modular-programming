/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:14:00 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/06 11:38:19 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSTR_H
# define LIBSTR_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# define FT_SUCCESS 1
# define FT_FAILURE 0
# define FT_ERROR -1
#endif

typedef struct	s_str
{
	char	*data;
	int		alloc;
	int		len;
}    t_str;

void		ft_libstr_add(t_str *tab, char value);
void		ft_FAST_str_delete(t_str *tab, int index);
void		ft_SLOW_str_delete(t_str *tab, int index);
t_str		ft_libstr_clone(t_str tab);
float		ft_libstr_median(t_str tab);
float		ft_libstr_average(t_str tab);
int			ft_libstr_sum(t_str tab);
int			ft_libstr_get(t_str tab, int index);
void		ft_libstr_debug(t_str tab);
void		ft_putstr(char *str);
int			ft_libstr_get_index_max_from(t_str tab, int n);
int			ft_libstr_get_index_min_from(t_str tab, int n);
int			ft_libstr_get_index_max(t_str tab);
int			ft_libstr_get_index_min(t_str tab);
void		ft_putnbr(int nb);
int			ft_libstr_nb_occurences(t_str tab, int n);
void		ft_libstr_destroy(t_str tab);
void		ft_libstr_set(t_str tab, int index, char value);
t_str		ft_libstr_concat(t_str T1, t_str T2);
int			ft_libstr_search(t_str tab, char n);
void		ft_libstr_print_positive_values(t_str tab);
t_str		ft_libstr_create(int len);
void		ft_libstr_sort1(t_str tab);
void		ft_swap(char *a, char *b);
char			ft_libstr_get_max(t_str tab);
char			ft_libstr_get_min(t_str tab);
int			ft_libstr_length(t_str tab);
