/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:20:14 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/03 11:00:15 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	i = 0;
	while (src[i] && dstlen + i < (dstsize - 1))
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[dstlen + i] = '\0';
	if (dstlen > dstsize)
		return (srclen + dstsize);
	return (dstlen + srclen);
}
