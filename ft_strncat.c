/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:21:54 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/08 13:21:16 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j])
	{
		if (j == n)
			s1[i] = '\0';
		else
			s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = s2[j];
	return (s1);
}
