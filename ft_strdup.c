/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:19:08 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/12 18:07:17 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*cop;

	i = 0;
	j = ft_strlen(s1);
	cop = (char *)malloc(sizeof(char) * (j + 1));
	if (cop == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		cop[i] = s1[i];
		i++;
	}
	cop[i] = '\0';
	return (cop);
}
