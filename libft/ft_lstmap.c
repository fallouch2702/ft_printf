/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:47:19 by selias            #+#    #+#             */
/*   Updated: 2018/11/14 15:35:56 by selias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list			*new;
	t_list			*tmp;
	t_list			*send;

	if (!lst)
		return (NULL);
	tmp = f(lst);
	new = ft_lstnew(tmp->content, tmp->content_size);
	lst = lst->next;
	send = new;
	while (lst)
	{
		tmp = f(lst);
		new->next = ft_lstnew(tmp->content, tmp->content_size);
		new = new->next;
		lst = lst->next;
	}
	return (send);
}
