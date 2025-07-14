/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:15:05 by MP9               #+#    #+#             */
/*   Updated: 2025/07/14 16:03:11 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, char *src, size_t n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		i;
	size_t		i2;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	i2 = ft_strlen(s1);
	while (i < i2 && ft_strchr(set, s1[i2 - 1]))
		i2--;
	str = (char *)malloc(sizeof(char) * ((i2 - i) + 1));
	if (!str)
		return (NULL);
	ft_strncpy(str, (char *)s1 + i, (i2 - i));
	str[i2 - i] = '\0';
	return (str);
}

// int main(void)
// {
// 	char *str = "W asgehtnbei  ir";
// 	char *c = " Wr";
// 	char *s;

// 	s = ft_strtrim(str, c);
// 	printf("%s\n", s);
// 	return (0);
// }