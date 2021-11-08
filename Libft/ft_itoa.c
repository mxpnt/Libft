/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:43:32 by mapontil          #+#    #+#             */
/*   Updated: 2021/11/08 08:13:44 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizenb(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	j = 0;
	while (str[j + 1])
		j++;
	i = 0;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	char		*dst;
	int			i;
	int			neg;
	long int	temp;

	neg = 0;
	temp = nbr;
	dst = malloc((ft_sizenb(temp) + 1) * sizeof(char));
	if (!dst)
		return (0);
	if (temp < 0)
	{
		neg = 1;
		temp *= -1;
	}
	i = -1;
	dst[ft_sizenb(nbr)] = '\0';
	if (neg)
		dst[ft_sizenb(nbr) - 1] = '-';
	while (++i < ft_sizenb(nbr) - neg)
	{
		dst[i] = (temp % 10) + 48;
		temp /= 10;
	}
	return (ft_strrev(dst));
}
