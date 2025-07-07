/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 18:22:26 by MP9               #+#    #+#             */
/*   Updated: 2025/07/07 13:59:52 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbnb(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	nb;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	nb = n;
	i = nbnb(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		str[--i] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (str);
}
