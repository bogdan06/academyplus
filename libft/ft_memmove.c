/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 15:08:31 by bolariu           #+#    #+#             */
/*   Updated: 2015/11/15 00:37:26 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t n)
{
	size_t		i;
	char		*tmp_d;
	char		*tmp_s;
	const char	*tmp;

	i = 0;
	tmp_d = dst;
	tmp = src;
	tmp_s = (char*)malloc(sizeof(char) * n);
	while (i < n)
	{
		tmp_s[i] = tmp[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		tmp_d[i] = tmp_s[i];
		i++;
	}
	free(tmp_s);
	return ((void*)dst);
}
