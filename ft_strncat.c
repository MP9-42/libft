/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:04:00 by MP9               #+#    #+#             */
/*   Updated: 2025/07/04 12:53:30 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i2] != '\0' && i2 < (int)n)
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	if (i2 == (int)n)
		dest[i2] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char dest[100] = "Hello, ";
// 	const	char src[] = "How Are You?";
// 	printf("%s\n", ft_strncat(dest, src, 19));
// 	printf("%s\n", strncat(dest, src, 18));
// 	return(0);
// }