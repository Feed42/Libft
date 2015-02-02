/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:21:34 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/12 18:29:26 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int			ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == '\0')
		return (0 - ((unsigned char)s2[i]));
	if (s2[i] == '\0')
		return ((unsigned char)s1[i]);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
