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

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	if (dst && src)
	{
		ft_memset(dst, '\0', n);
		i = 0;
		while (n-- > 0 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
