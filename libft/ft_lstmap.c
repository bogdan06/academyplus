/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolariu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 23:21:29 by bolariu           #+#    #+#             */
/*   Updated: 2015/11/15 15:48:36 by bolariu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*ret_last;

	ret = f(lst);
	ret_last = ret;
	if (ret == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		ret_last->next = f(lst);
		if (ret_last->next == NULL)
			return (NULL);
		ret_last = ret_last->next;
	}
	return (ret);
}
