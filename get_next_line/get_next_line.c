/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 15:57:24 by bolariu           #+#    #+#             */
/*   Updated: 2015/11/16 16:04:24 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		read_to_point(int const fd, char **point)
{
	char	*buff;
	int		ret;
	char	*temp;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		buff[ret] = '\0';
		temp = ft_strjoin(*point, buff);
		free(*point);
		*point = temp;
	}
	free(buff);
	return (ret);
}

int				get_next_line(int const fd, char **line)
{
	static char	*point = NULL;
	char		*aux;
	int			ret;

	if ((!point && (point = (char *)malloc(sizeof(*point))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	aux = ft_strchr(point, '\n');
	while (aux == NULL)
	{
		ret = read_to_point(fd, &point);
		if (ret == 0)
		{
			if (ft_strlen(point) == 0)
				return (0);
			point = ft_strjoin(point, "\n");
		}
		if (ret < 0)
			return (-1);
		else
			aux = ft_strchr(point, '\n');
	}
	*line = ft_strsub(point, 0, ft_strlen(point) - ft_strlen(aux));
	point = ft_strdup(aux + 1);
	return (1);
}