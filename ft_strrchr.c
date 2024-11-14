/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:34:02 by wshee             #+#    #+#             */
/*   Updated: 2024/11/14 12:57:35 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	length;

	length = ft_strlen(s);
	if (s == (NULL))
		return (NULL);
	while (s[length - 1])
	{
		if (s[length] == (char) c)
			return ((char *)(s + length));
		length--;
	}
	if (s[length] == (char) c)
		return ((char *)(s + length));
}

// find first c from the end of string
//line28 check is c is null terminator
// int main(void)
// {
// 	char* s = "hello";
// 	int n = 0;
// 	char* result = strrchr(s, n);
// 	char* result2 = ft_strrchr(s, n);
// 	printf("r:%s\n", result);
// 	printf("r2:%s\n", result2);
// }
