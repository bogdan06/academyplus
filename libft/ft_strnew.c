/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 12:07:13 by bolariu           #+#    #+#             */
/*   Updated: 2015/10/31 12:10:25 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc((size + 1) * sizeof(char));
	while (i <= size + 1)
	{
		str[size] = '\0';
		i++;
	}
	return (str);
}
