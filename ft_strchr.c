/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:30:09 by wshee             #+#    #+#             */
/*   Updated: 2024/11/08 16:36:38 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == (NULL)) // Check for null string input
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char*)(s + i));
		i++;
	}
	if (s[i] == (char)c) //Check for null terminator
		return ((char*)(s + i)); // Return pointer to null terminator
	return (NULL);
}

int main (void)
{
	char* s = "hello kkshkjk";
	int n = 0;
	char* result = strchr(s, n);
	char* result2 = ft_strchr(s, n);
	printf("r:%s\n", result);
	printf("r2:%s\n", result2);
}
