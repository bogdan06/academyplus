/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 15:37:51 by bolariu           #+#    #+#             */
/*   Updated: 2015/11/03 15:28:04 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = ft_strlen(s1) + 1;
	j = 0;
	while (j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}
