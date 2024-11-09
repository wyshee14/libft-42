/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:45:38 by wshee             #+#    #+#             */
/*   Updated: 2024/11/09 17:58:28 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1 = (unsigned char*)s1;
	const unsigned char *str2 = (unsigned char*)s2;
	size_t i;

	i = 0;
	while (i < n && str1[i] && str2[i])
	{
		if(str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int main (void)
{
	char str1[20] = "Hello 42";
	char str2[20] = "Hello 24";
	char str3[20] = "Hello 42";

	int result  = ft_memcmp(str1, str2, 10);
	printf("Result: %d\n", result);
}
