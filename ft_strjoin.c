/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:08:42 by MP9               #+#    #+#             */
/*   Updated: 2025/07/04 12:58:29 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	nbnb(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		while (s1[i] != '\0')
			i++;
		i++;
	}
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*send;
	int		i;
	int		i2;

	i = nbnb(s1, s2);
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
	return (send);
}

// int main()
// {
// 	printf("%s\n", ft_strjoin("Ey ", "Was geht?"));
// }