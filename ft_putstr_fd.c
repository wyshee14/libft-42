/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:21:02 by wshee             #+#    #+#             */
/*   Updated: 2024/11/11 16:33:53 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}

// int main(void)
// {
// 	char s[] = "Hello";
// 	ft_putstr_fd(s, 1);
// }