/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:21:55 by jcariou           #+#    #+#             */
/*   Updated: 2015/01/27 12:22:44 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_atoi(const char *str)
{
	int	i;
	int	val;
	int	neg;

	i = 0;
	val = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\t'\
			|| str[i] == '\n' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = val * 10 + str[i] - 48;
		i++;
	}
	return (val * neg);
}
