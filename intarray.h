/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 02:04:07 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/15 22:16:58 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef  struct intarray intarray;

struct	intarray
{
	int	*data;
	int len;
};


intarray	intarray_clone(intarray tab);

int			intarray_sum(intarray tab);

float		intarray_average(intarray tab);

float		intarray_median(intarray tab);

void		intarray_sort1(intarray tab);

void		intarray_sort(intarray tab);

int			intarray_get_index_of_min_from(intarray tab, int n);

int			intarray_get_min(intarray tab);

void		intarray_destroy(intarray tab);

intarray	intarray_concat(intarray T1, intarray T2);

int			intarray_get(intarray tab, int index);

void		intarray_set(intarray tab, int index, int value);

int			intarray_length(intarray tab);

void		intarray_swap(int *a, int *b);

intarray	intarray_create(int len);

void		intarray_print_positive_values(intarray tab);

int			intarray_search(intarray tab, int n);

int			intarray_nb_occurences(intarray tab, int n);

int			intarray_get_index_of_min(intarray tab);

void		intarray_debug(intarray tab);
