/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:46:21 by MP9               #+#    #+#             */
/*   Updated: 2025/07/03 14:47:59 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if (i >= 65 && i <= 90)
		return (1);
	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d\n", isalpha('A'));
// 	printf("%d\n", ft_isalpha('A'));
// 	return(0);
// }