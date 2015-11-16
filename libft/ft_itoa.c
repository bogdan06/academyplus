/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 15:08:31 by bolariu           #+#    #+#             */
/*   Updated: 2015/10/22 15:30:14 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_nbrlen(n);
	if (!(s = (char *)malloc((len + 1) * sizeof(*s))))
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	s[len] = '\0';
	while (n >= 10)
	{
		s[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	s[len - 1] = n + '0';
	return (s);
}
