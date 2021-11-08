/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:51:55 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/05 15:42:58 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*dst;

	if (!s)
		return (0);
	size = ft_strlen(s) + 1;
	dst = malloc(size * sizeof(char));
	if (!dst)
		return (0);
	i = 0;
	while (i < size - 1)
	{
		dst[i] = (*f)(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
