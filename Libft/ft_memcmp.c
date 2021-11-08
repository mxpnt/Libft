/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:53:22 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/05 10:02:21 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1b;
	unsigned char	*s2b;

	if (n == 0)
		return (0);
	i = 0;
	s1b = (unsigned char *)s1;
	s2b = (unsigned char *)s2;
	while (i < (n - 1) && s1b[i] == s2b[i])
		i++;
	return ((unsigned char)s1b[i] - (unsigned char)s2b[i]);
}
