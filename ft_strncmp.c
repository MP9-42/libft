/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:26:27 by MP9               #+#    #+#             */
/*   Updated: 2025/07/04 13:44:07 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	return((unsigned char) s1 - (unsigned char) s2);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("WasGeht", "Wasgehta", 7));
// 	printf("%d\n", strncmp("WasGeht", "Wasgehta", 7));
// 	return(0);
// }