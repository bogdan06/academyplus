/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 15:08:31 by bolariu           #+#    #+#             */
/*   Updated: 2015/11/15 15:33:45 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_min(int x, int y)
{
	if (x < y)
		return (x);
	return (y);
}

float		ft_fmin(float x, float y)
{
	if (x < y)
		return (x);
	return (y);
}

double		ft_dmin(double x, double y)
{
	if (x < y)
		return (x);
	return (y);
}
