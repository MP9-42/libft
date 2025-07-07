/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:15:05 by MP9               #+#    #+#             */
/*   Updated: 2025/07/07 17:02:12 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		i;
	size_t		i2;
	size_t		i3;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	i2 = ft_strlen(s1);
	while (i < i2 && ft_strchr(set, s1[i2 - 1]))
		i2--;
	i3 = (i2 - i);
	str = (char *)malloc(sizeof(char) * (i3 + 1));
	if (!str)
		return (NULL);
	ft_strncpy(str, (char *)s1 + i, i3);
	str[i3] = '\0';
	return (str);
}
