/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:17:46 by MP9               #+#    #+#             */
/*   Updated: 2025/07/03 14:50:28 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i2] != '\0')
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char dest[100] = "Hello, ";
// 	const	char src[] = "How Are You?";
// 	printf("%s\n", ft_strcat(dest, src));
// 	printf("%s\n", strcat(dest, src));
// 	return(0);
// }