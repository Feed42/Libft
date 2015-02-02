/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:15:36 by jcariou           #+#    #+#             */
/*   Updated: 2015/01/27 15:04:33 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print_tab_char(char **tabc)
{
	int x;
	int y;

	x = 0;
	while (tabc[x])
	{
		y = 0;
		while (tabc[x][y] != '\0')
		{
			ft_putstr("tabc[");
			ft_putnbr(x);
			ft_putstr("][");
			ft_putnbr(y);
			ft_putstr("] =");
			ft_putchar(tabc[x][y]);
			ft_putchar('\n');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
