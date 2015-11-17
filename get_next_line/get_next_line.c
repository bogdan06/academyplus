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

int		get_next_line(int const fd, char **line)
{
	static s_save	save;
	char			*buffer;

	if(save->state == 0)
	{
		save->state = 1;
		save->current_line == 0;
		while (read(fd, buffer, BUFF_SIZE))
		{
			buffer = (char*)malloc(sizeof(char) * BUFF_SIZE);
			while (buffer[i] != EOF)
			{
				save->file_content = buffer[i];
				i++;
			}
			free(buffer);
		}
		
	}
}