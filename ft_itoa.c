/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:32:39 by wshee             #+#    #+#             */
/*   Updated: 2024/11/11 13:44:34 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int digit_count (int n)
{
	int counter = 0;
	if (n < 0)
	{
		counter += 1;
		n = n * -1;
	}

	while (n != 0)
	{
		n = n / 10;
		counter++;

	}
	return (counter);
}

char *ft_itoa(int n)
{
	int size;
	char *result;
	long nb = n; // to handle negative min int, prevent overflow

	if (n == 0)
	{
		result = (char *)malloc(2);
		if (result == NULL)
			return(NULL);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}

	size = digit_count(nb);
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == (NULL))
		return (NULL);
	result[size] = '\0';
	size--;
	if (nb < 0)
	{
		result[0] = '-';
		nb = nb * -1;
	}
	while (nb != 0)
	{
		result[size] = (nb % 10) + '0';
		nb = nb / 10;
		size--;
	}
	return (result);
}

int main(void)
{
	int n = 0;
	int n1 = -123;
	int n2 = 123;
	int n3 = -2147483648;

	char *res = ft_itoa(n);
	printf("%s\n", res);
	free(res);

	res = ft_itoa(n1);
	printf("%s\n", res);
	free(res);

	res = ft_itoa(n2);
	printf("%s\n", res);
	free(res);

	res = ft_itoa(n3);
	printf("%s\n", res);
	free(res);
}
