/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcariou <jcariou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 11:56:22 by jcariou           #+#    #+#             */
/*   Updated: 2015/02/02 11:33:01 by jcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

int					put_next_line(t_struc *struc, char **line, int const fd)
{
	int				i;

	i = 0;
	if (!(*line = (char *)malloc(sizeof(char))))
		return (-1);
	if (struc->fd != fd)
	{
		struc->fd = fd;
	}
	while (struc->s[i])
	{
		if (struc->s[i] == '\n')
		{
			*line = ft_strsub(struc->s, 0, i);
			i++;
			struc->s = ft_strcpy(struc->s, &(struc->s[i]));
			return (1);
		}
		i++;
	}
	return (0);
}

int					get_next_line(int const fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static			t_struc	struc;

	if (BUFF_SIZE <= 0 || line == NULL || fd >= 99
			|| (fd == 1 && line == NULL) || fd < 0)
		return (-1);
	if (struc.s == NULL)
		struc.fd = fd;
	if (!struc.s || struc.fd != fd)
		if (!(struc.s = (char *)malloc(sizeof(*struc.s))))
			return (-1);
	while ((struc.ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[struc.ret] = '\0';
		struc.s = ft_strjoin(struc.s, buf);
		if (put_next_line(&struc, line, fd) == 1)
			return (1);
	}
	if (struc.ret < 0)
		return (-1);
	if (put_next_line(&struc, line, fd) == 1)
		return (1);
	*line = ft_strcpy(struc.s, struc.s);
	return (0);
}
