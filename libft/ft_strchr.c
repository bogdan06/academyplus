/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 15:57:52 by bolariu           #+#    #+#             */
/*   Updated: 2015/11/03 15:49:27 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	const char *p;

	p = s;
	while (*p != '\0')
	{
		if (*p == c)
			return ((char *)p);
		p++;
	}
	if (*p == c)
		return ((char *)p);
	return (NULL);
}
