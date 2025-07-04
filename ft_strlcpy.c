/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:17:35 by MP9               #+#    #+#             */
/*   Updated: 2025/07/04 13:00:43 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i != dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	test_ft_strlcpy();
// 	printf("All tests passed successfully.\n");
// 	return (0);
// }