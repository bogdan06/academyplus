/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 02:17:38 by bolariu           #+#    #+#             */
/*   Updated: 2015/10/24 02:17:49 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	int			c;

	i = 0;
	c = 0;
	if (s2[0] == '\0')
		return (char*)(s1);
	while (i < n && s1[i])
	{
		j = i;
		c = 0;
		while (s1[j] == s2[c] && j < n)
		{
			j++;
			c++;
			if (s2[c] == '\0')
				return (char*)(&s1[i]);
		}
		i++;
	}
	return (NULL);
}
