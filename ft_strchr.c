/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:20:24 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/10 16:18:02 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != (char)c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == (char)c)
		return ((char*)&s[i]);
	return (NULL);
}
