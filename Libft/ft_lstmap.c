/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:37:33 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/08 08:11:24 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*curr;

	if (!lst || !f)
		return (0);
	curr = ft_lstnew((*f)(lst->content));
	new = curr;
	lst = lst->next;
	while (lst)
	{
		curr->next = ft_lstnew((*f)(lst->content));
		if (!curr->next)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		curr = curr->next;
		lst = lst->next;
	}
	return (new);
}
