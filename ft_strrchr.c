/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:20:41 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/10 16:20:20 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (s[i] != (char)c && i >= 0)
	{
		i--;
		if (s[i] == '\0')
		{
			if ((char)c != '\0')
				return (NULL);
			return ((char *)&s[i]);
		}
	}
	return ((char*)&s[i]);
}
