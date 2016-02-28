/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 15:00:23 by bolariu           #+#    #+#             */
/*   Updated: 2015/11/16 15:01:29 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int index;

	if (s && f)
	{
		index = 0;
		while (*s)
		{
			f(index, s);
			index++;
			s++;
		}
	}
}
