/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 11:56:52 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/13 18:59:03 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static char		*ft_twentyfive(char *s, int n, int sign, size_t i)
{
	s[i--] = '\0';
	if (n == -2147483648)
		s[i--] = 56;
	else
		s[i--] = (sign * n % 10) + 48;
	while ((n = n / 10))
	{
		s[i] = (sign * n % 10) + 48;
		i--;
	}
	if (sign == -1)
		s[i] = '-';
	return (s);
}

char			*ft_itoa(int n)
{
	size_t	i;
	int		n_;
	int		sign;
	char	*s;

	i = 1;
	sign = 1;
	n_ = n;
	if (n < 0)
		sign = -1;
	while (n / 10)
	{
		i++;
		n = n / 10;
	}
	if (sign == -1)
		i++;
	if ((s = (char *)malloc(sizeof(s) * (i + 1))) == NULL)
		return (NULL);
	n = n_;
	s = ft_twentyfive(s, n, sign, i);
	return (s);
}
