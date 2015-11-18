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
#include "libft/libft.h"

static void	ft_populate(int const fd, struct s_save save)
{
	int				nbytes;
	char			*buf;
	char			*str;

	str = (char*)ft_memalloc(sizeof(char) * BUFF_SIZE);
	buf = (char*)ft_memalloc(sizeof(char) * (BUFF_SIZE + 1));
	buf = (char*)ft_memset(buf, '\0', BUFF_SIZE);
	while ((nbytes = read(fd, buf, BUFF_SIZE)) && (nbytes != -1))
	{
		str = ft_strjoin(str, buf);
		buf = (char*)ft_memset(buf, '\0', BUFF_SIZE + 1);
	}
	save.split_lines = ft_strsplit(str, '\n');
}

int			get_next_line(int const fd, char **line)
{
	static struct	s_save save;

	if (!line)
		return (-1);
	if (!save.total_lines)
	{
		ft_populate(fd, save);
	}
	if (!save.split_lines)
		return (-1);
	if (save.current_line <= save.total_lines)
	{
		*line = save.split_lines[save.current_line];
		return (1);
	}
	return (0);
}