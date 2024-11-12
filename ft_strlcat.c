/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:09:18 by wshee             #+#    #+#             */
/*   Updated: 2024/11/10 14:14:51 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len < size - 1 && size > 0)
	{
		while (dst_len + i < size - 1 && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = 0;
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}

// int main(void)
// {
// 	char dst[100] = "Hello";
// 	char src[] = " World";
// 	size_t size = 20;
// 	ft_strlcat(dst,src,size);
// 	printf("%s\n", dst);
// 	return (0);
// }
