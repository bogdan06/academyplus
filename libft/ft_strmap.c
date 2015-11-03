/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 15:08:31 by bolariu           #+#    #+#             */
/*   Updated: 2015/10/22 15:30:14 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	int		i;

	if (s && f)
	{
		dst = ft_strnew(ft_strlen(s));
		i = 0;
		while (s[i] != '\0')
		{
			dst[i] = f(s[i]);
			i++;
		}
		return (dst);
	}
	return (NULL);
}