/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:52:21 by MP9               #+#    #+#             */
/*   Updated: 2025/07/04 13:48:13 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t s)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	dl = 0;
	sl = 0;
	i = 0;
	while (dest[dl] != '\0' && dl < s)
		dl++;
	while (src[sl] != '\0')
		sl++;
	if ((dl) == s)
		return (sl + s);
	while (src[i] != '\0' && dl + i < s - 1)
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	return (dl + i);
}
// int	main(void)
// {
// 	char dest[34] = "Mikel";
// 	const char src[] = "Jimenez Francis";
// 	printf("%zu\n", ft_strlcat(dest, src, 34));
// 	printf("%zu\n", strlcat(dest, src, 34));
// 	return(0);
// }