/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 15:08:31 by bolariu           #+#    #+#             */
/*   Updated: 2015/10/22 15:30:14 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t		i;
	char		*tmp_d;
	const char	*tmp_s;

	i = 0;
	tmp_d = (char *)dst;
	tmp_s = (char *)src;
	while (i < n)
	{
		tmp_d[i] = tmp_s[i];
		i++;
	}
	return (dst);
}