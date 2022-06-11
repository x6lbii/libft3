/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 05:01:38 by saealzaa          #+#    #+#             */
/*   Updated: 2022/06/08 04:30:25 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int d, int fd)
{
	if (d == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (d < 0)
	{
		ft_putchar_fd('-', fd);
		d = -d;
	}
	if (d >= 0 && d <= 9)
		ft_putchar_fd(d + '0', fd);
	if (d > 9)
	{
		ft_putnbr_fd(d / 10, fd);
		ft_putnbr_fd(d % 10, fd);
	}
}
