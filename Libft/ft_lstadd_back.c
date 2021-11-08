/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:06:52 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/07 11:17:53 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*curr;

	curr = *alst;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	while (curr->next)
		curr = curr->next;
	curr->next = new;
}
