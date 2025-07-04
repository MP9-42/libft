/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:43:40 by MP9               #+#    #+#             */
/*   Updated: 2025/07/03 14:50:56 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*str2;
	int		i;

	i = 0;
	str2 = malloc(ft_strlen(str) + 1);
	if (!str2)
		return (NULL);
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

// int	main(void)
// {
// 	char str[10] = "Mikel";
// 	printf("%s\n", ft_strdup(str));
// 	printf("%s\n", strdup(str));
// 	return(0);
// }