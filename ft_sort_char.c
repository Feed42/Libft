/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 10:56:18 by jcariou           #+#    #+#             */
/*   Updated: 2015/01/27 15:04:56 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_sort_char(char **tabc, int nb_elem)
{
	int		i;
	int		j;

	i = 0;
	if (!tabc || nb_elem <= 0)
		return ;
	while (i < nb_elem - 1)
	{
		j = i + 1;
		while (j < nb_elem)
		{
			if (ft_strcmp(tabc[i], tabc[j]) > 0)
			{
				ft_swap_char(tabc[i], tabc[j]);
			}
			j++;
		}
		i++;
	}
}
