/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:36:23 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/04 10:21:01 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*dst;

	dst = (char *)s;
	if (n == 0)
		return ;
	i = 0;
	while (i < n)
	{
		dst[i] = 0;
		i++;
	}
}