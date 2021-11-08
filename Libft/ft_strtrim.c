/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:09:04 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/05 15:42:43 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	size;
	size_t	i;

	if (!s1)
		return (0);
	size = ft_strlen(s1);
	i = 0;
	while (ft_check(s1[i], set) == 1)
		i++;
	if (i == size)
	{
		dst = ft_substr(s1, i, size - i);
		return (dst);
	}
	while (ft_check(s1[size - 1], set) == 1)
		size--;
	dst = ft_substr(s1, i, size - i);
	return (dst);
}
