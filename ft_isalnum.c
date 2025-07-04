/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:24:53 by MP9               #+#    #+#             */
/*   Updated: 2025/07/03 14:47:46 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isalnum(int i)
{
	if (ft_isdigit(i) || ft_isalpha(i))
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	printf("%d\n", isalnum('a'));
// 	printf("%d\n", ft_isalnum('a'));
// 	return(0);
// }