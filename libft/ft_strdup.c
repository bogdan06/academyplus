/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 15:08:31 by bolariu           #+#    #+#             */
/*   Updated: 2015/10/22 15:30:14 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(char const *s1)
{
	size_t	len;
	char	*s2;

	len = 0;
	while (s1[len] != '\0')
		len++;
	s2 = (char *)malloc((len + 1) * sizeof(*s2));
	if (s2)
		s2 = ft_strcpy(s2, s1);
	return (s2);
}
