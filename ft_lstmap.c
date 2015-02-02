/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 09:42:27 by jcariou           #+#    #+#             */
/*   Updated: 2015/01/23 13:39:44 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*link;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	link = new;
	while (lst)
	{
		if (f(lst) == NULL)
			lst = lst->next;
		else
		{
			link->next = f(lst);
			lst = lst->next;
		}
	}
	return (new);
}
