/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 19:32:28 by MP9               #+#    #+#             */
/*   Updated: 2025/07/04 12:59:09 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < (int) n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
// int main()
// {
// 	char dest[20] = "1";
// 	char src[] = "WasBruda";
// 	printf("%s\n", ft_strncpy(dest, src, 6));
// 	return(0);
// }