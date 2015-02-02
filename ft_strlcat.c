/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:20:11 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/12 18:05:46 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dst_;
	const char	*src_;
	size_t		i;
	size_t		dstl;

	dst_ = dst;
	src_ = src;
	i = size;
	while (i-- != 0 && *dst_ != '\0')
		dst_++;
	dstl = dst_ - dst;
	i = size - dstl;
	if (i == 0)
		return (dstl + strlen(src_));
	while (*src_ != '\0')
	{
		if (i != 1)
		{
			*dst_++ = *src_;
			i--;
		}
		src_++;
	}
	*dst_ = '\0';
	return (dstl + (src_ - src));
}
