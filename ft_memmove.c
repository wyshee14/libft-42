/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:45:17 by wshee             #+#    #+#             */
/*   Updated: 2024/11/10 13:45:23 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t numBytes)
{
	unsigned char *d = (unsigned char*)dest;
    const unsigned char *s = (const unsigned char*)src;
    unsigned char *temp = (unsigned char*)malloc(numBytes);
    size_t i = 0;
    while (i < numBytes)
    {
        temp[i] = s[i];
    }
    while (i < numBytes)
    {
        d[i] = temp[i];
    }
    free(temp);
    return dest;
}

int main()
{
    char str1[] = "Geeksfor";
    ft_memmove(str1 + 5, str1, sizeof(str1)+1);
    printf("%s\n", str1);
}
