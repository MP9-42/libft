/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:20:23 by MP9               #+#    #+#             */
/*   Updated: 2025/07/06 18:11:37 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sorc;

	i = 0;
	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = sorc[i];
		i++;
	}
	return (dst);
}
