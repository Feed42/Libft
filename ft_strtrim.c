/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 13:43:20 by jcariou           #+#    #+#             */
/*   Updated: 2014/11/12 18:08:27 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*cop;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	cop = (char *)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (cop == NULL)
		return (NULL);
	while (s[i])
		cop[j++] = s[i++];
	cop[j] = '\0';
	j--;
	while (cop[j] == ' ' || cop[j] == '\n' || cop[j] == '\t')
		j--;
	cop[j + 1] = '\0';
	return (cop);
}
