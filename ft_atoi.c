/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:27:13 by MP9               #+#    #+#             */
/*   Updated: 2025/07/05 14:06:59 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		v;
	size_t	e;

	v = 1;
	e = 0;
	if (!str)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			v = v * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		e = e * 10 + (*str - '0');
		str++;
	}
	return (v * e);
}

// int	main(void)
// {
// 	printf("%d\n", atoi("+\t\v\f\r\n \f1234"));
// 	printf("%d\n", ft_atoi("+\t\v\f\r\n \f1234"));
// 	return(0);
// }