/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:43:17 by MP9               #+#    #+#             */
/*   Updated: 2025/07/03 14:51:20 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;
	int	i2;

	if (!needle && !haystack)
		return ((char *)haystack);
	i = 0;
	while (i < (int)n && haystack[i] != '\0')
	{
		i2 = 0;
		while (haystack[i + i2] == needle[i2] && haystack[i + i2] != '\0'
			&& needle[i2] != '\0' && (i + i2) < (int)n)
			i2++;
		if (needle[i2] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	printf("%d\n", strnstr("in spanish rain there is pain", "ain", 16));
// 	printf("%s\n", ft_strnstr("in spanish rain there is pain", "ain", 5));
// }