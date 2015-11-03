/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 15:43:29 by bolariu           #+#    #+#             */
/*   Updated: 2015/11/03 15:25:46 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(src);
	if (j < n)
	{
		while (i < j)
		{
			dst[i] = src[i];
			i++;
		}
		while (dst[i] != '\0')
		{
			dst[i] = '\0';
		}
	}
	else
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	return (dst);
}
