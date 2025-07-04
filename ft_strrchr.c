/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:09:04 by MP9               #+#    #+#             */
/*   Updated: 2025/07/03 14:51:23 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*chr;

	i = 0;
	chr = NULL;
	while (s[i] != '\0')
	{
		if ((int)s[i] == c)
			chr = &s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return ((char *)chr);
}
// int	main(void)
// {
// 	printf("%s\n", strrchr("Halloooooo", '\0'));
// 	printf("%s\n", ft_strrchr("Hallooooooo", '\0'));
// }