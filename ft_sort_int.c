/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 10:56:18 by jcariou           #+#    #+#             */
/*   Updated: 2015/01/27 15:05:47 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_sort_int(int *tabi, int nb_elem)
{
	int		i;
	int		j;

	i = 0;
	if (!tabi || nb_elem <= 0)
		return ;
	while (i < nb_elem - 1)
	{
		j = i + 1;
		while (j < nb_elem - 1)
		{
			if (tabi[i] > tabi[j])
			{
				ft_swap_int(tabi[i], tabi[j]);
			}
			j++;
		}
		i++;
	}
}
