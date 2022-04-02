/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:52:25 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/01 16:19:40 by ablaamim         ###   ########.fr       */
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

#endif
