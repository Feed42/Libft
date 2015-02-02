/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 19:54:46 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/12 18:03:22 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*mov;

	mov = (char	*)malloc(sizeof(mov) * len);
	mov = ft_strncpy(mov, src, len);
	dst = (void *)ft_strncpy(dst, mov, len);
	free(mov);
	return (dst);
}
