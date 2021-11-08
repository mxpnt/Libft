/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:29:07 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/04 17:30:25 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*str;

	i = 0;
	str = (const char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
