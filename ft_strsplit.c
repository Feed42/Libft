/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 13:17:15 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/16 15:37:56 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static int		ft_compteur(char const *s, char c)
{
	int	a;
	int	b;
	int	cmp;

	a = 0;
	b = 0;
	cmp = 0;
	while (s[a] != '\0')
	{
		if (b == 1 && s[a] == c)
			b = 0;
		if (b == 0 && s[a] != c)
		{
			b = 1;
			cmp++;
		}
		a++;
	}
	return (cmp);
}

static int		ft_longueur(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_compteur(s, c);
	str = (char **)malloc(sizeof(*str) * (ft_compteur(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (j--)
	{
		while (*s == c && *s != '\0')
			s++;
		str[i] = ft_strsub((const char *)s, 0, ft_longueur((const char *)s, c));
		if (str[i] == NULL)
			return (NULL);
		s = s + ft_longueur(s, c);
		i++;
	}
	str[i] = NULL;
	return (str);
}
