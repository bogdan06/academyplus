/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 13:45:01 by bolariu           #+#    #+#             */
/*   Updated: 2015/10/25 13:45:03 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_lenght;
	size_t i;
	size_t max;

	i = 0;
	dst_lenght = ft_strlen(dst) +1;
	max = dst_lenght - 2 + size;
	while ((dst_lenght < max) && (src[i] != '\0'))
	{
		dst[dst_lenght] = src[i];
		dst_lenght++;
		i++;
	}
	dst[dst_lenght] = '\0';
	return (dst_lenght);
}