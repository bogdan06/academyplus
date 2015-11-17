/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 12:23:17 by bolariu           #+#    #+#             */
/*   Updated: 2015/11/15 01:59:30 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;
	size_t			slen;

	if (s == NULL)
		return (NULL);
	str = (char*)malloc((len + 1) * sizeof(char));
	slen = ft_strlen(s);
	i = 0;
	if ((start <= slen) && (len <= (slen - start)))
	{
		while (len > 0)
		{
			str[i] = s[start + i];
			i++;
			len--;
		}
		str[i] = '\0';
	}
	else
		return (NULL);
	return (str);
}
