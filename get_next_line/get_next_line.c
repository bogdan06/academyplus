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
	static int	current_line;
	size_t		nbytes;
	static char	buffer[BUFF_SIZE];

	line = 0;
	nbytes = sizeof(buffer);
	
	bytes_read = read(fd, buffer, nbytes);
	
}