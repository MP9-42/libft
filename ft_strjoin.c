/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:08:42 by MP9               #+#    #+#             */
/*   Updated: 2025/07/06 18:13:56 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*send;
	size_t	i;
	size_t	i2;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	i2 = 0;
	send = malloc(sizeof(char) * (i + 1));
	if (!send)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		send[i] = s1[i];
		i++;
	}
	while (s2[i2] != '\0')
	{
		send[i] = s2[i2];
		i++;
		i2++;
	}
	send[i] = '\0';
	return (send);
}

// int main()
// {
// 	printf("%s\n", ft_strjoin("Ey ", "Was geht?"));
// }