/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:56:19 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/10 15:47:52 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(str) * (size));
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
