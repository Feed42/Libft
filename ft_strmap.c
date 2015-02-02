/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:24:46 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/12 18:06:24 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char*)malloc(sizeof(*str) * (i + 1));
	if (str)
	{
		while (s[i])
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
