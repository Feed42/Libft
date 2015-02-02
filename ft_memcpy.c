/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 18:28:20 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/13 17:56:10 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*src_;
	char	*dst_;
	size_t	i;

	i = 0;
	if (n == 0 || src == dst)
		return (dst);
	src_ = (char *)src;
	dst_ = (char *)dst;
	while (i < (n - 1))
	{
		dst_[i] = src_[i];
		i++;
	}
	dst_[i] = src_[i];
	return (dst);
}
