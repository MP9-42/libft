/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:55:20 by MP9               #+#    #+#             */
/*   Updated: 2025/07/03 14:47:27 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(size_t) * (size * count));
	if (!str)
		return (NULL);
	ft_bzero(str, (size * count));
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_calloc(5, 4));
// 	printf("%s\n", calloc(5, 4));
// 	return(0);
// }