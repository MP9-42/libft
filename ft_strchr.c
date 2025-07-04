/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:19:18 by MP9               #+#    #+#             */
/*   Updated: 2025/07/04 13:40:22 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char) c)
		i++;
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (NULL);
}
// int	main(void)
// {
// 	printf("%s\n", strchr("WasG3ht", '\0'));
// 	printf("%s\n", ft_strchr("WasG3ht", '\0'));
// }