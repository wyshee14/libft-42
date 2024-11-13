/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:40:56 by wshee             #+#    #+#             */
/*   Updated: 2024/11/13 14:21:29 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-',1);
		ft_putchar_fd('2',1);
		n = 147483648;
		ft_putnbr_fd(n,fd);
		return;
	}
	else if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-',1);
		ft_putnbr_fd(n, fd);
	}
	else if (n < 10)
	{
		ft_putchar_fd(n + '0', 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

// int main(void)
// {
// 	ft_putnbr_fd(123, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-123, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(0, 1);
// 	write(1, "\n", 1);
// }
