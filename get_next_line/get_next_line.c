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

static int	ft_read_file(int const fd, char **file_lines)
{
	char			*temp_string;
	char			*file_cont;
	char			*buf;
	size_t			num_read_chars;

	buf = malloc(sizeof(char)*BUFF_SIZE);
	temp_string = ft_memalloc(1);
	file_cont = ft_memalloc(1);
	while ((num_read_chars = read(fd, buf, BUFF_SIZE)) && (num_read_chars != 0))
	{
		free(temp_string);
		temp_string = ft_memalloc(sizeof(char) * (ft_strlen(file_cont) + num_read_chars + 1));
		temp_string = ft_strncat(file_cont, buf, num_read_chars);
		free(file_cont);
		file_cont = temp_string;
		free(buf);
		buf = malloc(sizeof(char)*BUFF_SIZE);
	}
	if ((file_lines = ft_strsplit(file_cont, '\n')))
		return (1);
	return (0);
}

int			get_next_line(int const fd, char **line)
{
	static struct	s_save save;

	if (!line)
		return (-1);
	if (!save.file_lines)
	{
		save.current_line = 0;
		save.file_lines = NULL;
		if(!ft_read_file(fd, save.file_lines))
			return (-1);
	}
	*line = ft_strcpy(save.file_lines[save.current_line], *line);
	save.current_line++;
	if (save.current_line >= save.content_size)
		return (0);
	return (1);
}