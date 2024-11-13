/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:22:05 by wshee             #+#    #+#             */
/*   Updated: 2024/11/12 18:02:52 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;
	size_t				i;

	str = (unsigned char *)s;
	ch = (unsigned char) c;
	i = 0;
	if (str == (NULL))
		return (NULL);
	while (i < n)
	{
		if (str[i] == ch)
			return ((unsigned char *)(str + i));
		i++;
	}
	return (NULL);
}

//scans the memory area until the occurence of c, returns pointer
// int main (void)
// {
// 	char str[20] = "Hello 42";
// 	char *result = ft_memchr(str, 'o', 10);
// 	printf("Result: %s\n", result);
// }
