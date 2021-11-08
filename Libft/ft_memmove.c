/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:34:27 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/05 10:22:26 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srce;

	i = 0;
	dest = (unsigned char *)dst;
	srce = (unsigned char *)src;
	if (dest > srce)
	{
		while (i < len)
		{
			len--;
			dest[len] = srce[len];
		}
	}
	if (dest < srce)
	{
		while (i < len)
		{
			dest[i] = srce[i];
			i++;
		}
	}
	return (dst);
}
