/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:47:00 by MP9               #+#    #+#             */
/*   Updated: 2025/07/03 14:49:31 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int i, size_t n)
{
	unsigned char	*p;
	int				c;

	c = 0;
	p = (unsigned char *)s;
	while ((int)p[c] != '\0' && c < (int)n)
	{
		p[c] = i;
		c++;
	}
	return (p);
}
// int	main(void)
// {
// 	printf("%p\n", ft_memset("WASGEHTABB", 1, 8));
// 	printf("%p\n", memset("WASGEHTABB", 1, 8));
// }