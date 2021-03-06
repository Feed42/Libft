/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:06:33 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/08 17:46:59 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		ft_strclr(char *s)
{
	size_t i;
	size_t j;

	i = 0;
	if (s)
	{
		j = ft_strlen(s);
		while (s[i] && i < j)
		{
			s[i] = '\0';
			i++;
		}
	}
}
