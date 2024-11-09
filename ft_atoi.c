/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:58:50 by wshee             #+#    #+#             */
/*   Updated: 2024/11/09 18:32:08 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int i = 0;
	int sign = 1;
	int result = 0;
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
		result = result *10;
		result = result + nptr[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

int main(void)
{
	char str[] = "     -23456";
	int res = ft_atoi(str);
	printf("%d\n", res);
}
