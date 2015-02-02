/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:20:24 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/12 18:07:36 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t i;
	size_t cpt;

	cpt = 0;
	if (s && f)
	{
		i = ft_strlen(s);
		while (cpt < i)
		{
			(*f)(cpt, s);
			cpt++;
			s++;
		}
	}
}
