/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 19:13:22 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/13 17:56:28 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*src_;
	unsigned char	*dst_;
	unsigned char	i;

	if (!n)
		return (NULL);
	i = (size_t)c;
	src_ = (unsigned char *)src;
	dst_ = (unsigned char *)dst;
	while (n > 0)
	{
		if ((*dst_++ = *src_++) == i)
			return (dst_);
		n--;
	}
	return (NULL);
}
