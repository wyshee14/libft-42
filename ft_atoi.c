/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:58:50 by wshee             #+#    #+#             */
/*   Updated: 2024/11/12 17:14:07 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_isspace(int c)
{
	if ((c >= 9 && c == 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit (nptr[i]))
	{
		result = result * 10;
		result = result + nptr[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

// int main(void)
// {
// 	char str[] = "     -23456";
// 	int res = ft_atoi(str);
// 	printf("%d\n", res);
// }
