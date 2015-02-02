/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 12:27:24 by jcariou           #+#    #+#             */
/*   Updated: 2015/01/27 15:04:42 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print_tab_int(int **tabi, int nb_line, int nb_case)
{
	int	x;
	int	y;

	x = 0;
	while (x < nb_line)
	{
		y = 0;
		while (y < nb_case)
		{
			ft_putnbr(tabi[x][y]);
			ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
