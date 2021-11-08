/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:13:18 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/05 09:10:28 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char *str, char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	while (str[i] == to_find[i] && i < len)
	{
		i++;
		if (to_find[i] == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == *needle)
		{
			if (ft_check((char *)haystack + i, (char *)needle, len - i) == 1)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
