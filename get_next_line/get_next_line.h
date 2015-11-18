/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 16:04:54 by bolariu           #+#    #+#             */
/*   Updated: 2015/11/16 16:04:56 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

typedef struct	s_save
{
	int			current_line;
	int			total_lines;
	char		**split_lines;
}				t_save;

int		get_next_line(int const fd, char **line);

#endif
