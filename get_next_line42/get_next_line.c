/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeculea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 18:46:09 by apeculea          #+#    #+#             */
/*   Updated: 2017/02/26 21:42:26 by apeculea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_read(int const fd, char **stock)
{
	int		i;
	char	*str;
	char	*buff;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	i = read(fd, buff, BUFF_SIZE);
	if (i > 0)
	{
		buff[i] = '\0';
		str = ft_strjoin(*stock, buff);
		free(*stock);
		*stock = str;
	}
	free(buff);
	return (i);
}

int				get_next_line(int const fd, char **line)
{
	static char	*s = NULL;
	char		*op;
	int			i;

	if ((!s && (s = (char *)malloc(sizeof(*s))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	op = ft_strchr(s, '\n');
	while (op == NULL)
	{
		i = ft_read(fd, &s);
		if (i == 0)
		{
			if (ft_strlen(s) == 0)
				return (0);
			s = ft_strjoin(s, "\n");
		}
		if (i < 0)
			return (-1);
		else
			op = ft_strchr(s, '\n');
	}
	*line = ft_strsub(s, 0, ft_strlen(s) - ft_strlen(op));
	s = ft_strdup(op + 1);
	return (1);
}
