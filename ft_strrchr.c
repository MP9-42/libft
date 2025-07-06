/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:09:04 by MP9               #+#    #+#             */
/*   Updated: 2025/07/06 18:31:25 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*chr;

	i = ft_strlen(s);
	chr = NULL;
	while (i >= 0 && (unsigned char)s[i] != (unsigned char)c)
		i--;
	if ((unsigned char)s[i] == (unsigned char)c)
		chr = &s[i];
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return ((char *)chr);
}
// int	main(void)
// {
// 	printf("%s\n", strrchr("Halloooooo", '\0'));
// 	printf("%s\n", ft_strrchr("Hallooooooo", '\0'));
// }