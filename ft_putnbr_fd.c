/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:44:36 by MP9               #+#    #+#             */
/*   Updated: 2025/07/04 13:17:21 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include<unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;
	int		psy;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * (-1);
	}
	if (nb / 10 > 0)
		ft_putnbr_fd(nb / 10, fd);
	psy = nb % 10;
	c = psy + '0';
	write (fd, &c, 1);
}

// int main()
// {
// 	ft_putnbr_fd(4, 1);
// }