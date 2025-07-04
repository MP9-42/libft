/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 18:13:07 by MP9               #+#    #+#             */
/*   Updated: 2025/07/04 13:38:43 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*mem1;
	const unsigned char	*mem2;
	size_t					i;

	mem1 = (const unsigned char *)s1;
	mem2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (mem1[i] != mem2[i])
			return(mem1[i] - mem2[i]);
		i++;	
	}
	return (0);
}
