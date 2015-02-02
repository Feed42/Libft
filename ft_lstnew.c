/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 07:35:55 by jcariou           #+#    #+#             */
/*   Updated: 2015/01/23 13:40:18 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
		new->content_size = 0;
	else
		new->content_size = content_size;
	new->content = (void *)content;
	new->next = NULL;
	return (new);
}
