/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:40:49 by MP9               #+#    #+#             */
/*   Updated: 2025/07/03 14:48:29 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int i)
{
	return (i >= '0' && i <= '9');
}

// int	main(void)
// {
// 	printf("%d\n", isdigit('4'));
// 	printf("%d\n", ft_isdigit('5'));
// 	return(0);
// }