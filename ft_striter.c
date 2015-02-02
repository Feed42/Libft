/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:14:55 by jcariou           #+#    #+#             */
/*   Updated: 2014/12/16 18:16:54 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		ft_striter(char *s, void (*f)(char*))
{
	size_t	i;
	size_t	cpt;

	cpt = 0;
	if (s && f)
	{
		i = ft_strlen(s);
		while (cpt < i)
		{
			(*f)(s);
			cpt++;
			s++;
		}
	}
}
