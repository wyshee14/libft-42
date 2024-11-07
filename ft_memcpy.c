/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:30:11 by wshee             #+#    #+#             */
/*   Updated: 2024/11/07 17:49:25 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t numBytes)
{
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (unsigned char *)src;
    size_t i = 0;
    while (i < numBytes)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    printf("Before memcpy: %s\n", str1);
    ft_memcpy(str1, str2, sizeof(str2));
    printf("After memcpy: %s\n", str1);
}
