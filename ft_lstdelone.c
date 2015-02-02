/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 08:43:49 by jcariou           #+#    #+#             */
/*   Updated: 2015/01/23 09:52:13 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst)
	{
		del(((*alst)->content), (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
