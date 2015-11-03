/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 12:23:17 by bolariu           #+#    #+#             */
/*   Updated: 2015/10/31 12:30:17 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *str;
	
	i = 0;
	str = malloc(len * sizeof(char));
	while (start < (unsigned int)len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
