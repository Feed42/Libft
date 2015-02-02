/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:54:29 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/12 18:44:00 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s2[i] != s1[i] && i != n)
		return (0);
	return (1);
}
