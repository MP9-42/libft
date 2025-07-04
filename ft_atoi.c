/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:27:13 by MP9               #+#    #+#             */
/*   Updated: 2025/07/04 12:53:40 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	v;
	int	e;

	v = 1;
	e = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	if (*str == '-')
		v = v * (-1);
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		e = e * 10 + (*str - '0');
		str++;
	}
	return (v * e);
}

// int	main(void)
// {
// 	printf("%d\n", atoi("+123"));
// 	printf("%d\n", ft_atoi("+123"));
// 	return(0);
// }