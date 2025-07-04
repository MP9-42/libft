/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:29:14 by MP9               #+#    #+#             */
/*   Updated: 2025/07/04 13:00:14 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	i2;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		i2 = 0;
		while (needle[i2] != '\0' && haystack[i + i2] != '\0' && haystack[i
				+ i2] == needle[i2])
			i2++;
		if (needle[i2] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	printf("%s\n", strstr("in spanish rain there is pain", "ain"));
// 	printf("%s\n", ft_strstr("in spanish rain there is pain", "ain"));
// }