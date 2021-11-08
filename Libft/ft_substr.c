/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:40:35 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/07 14:03:55 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return (0);
	i = 0;
	while (i < len && start <= ft_strlen(s))
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}
