/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:09:18 by wshee             #+#    #+#             */
/*   Updated: 2024/11/18 14:03:18 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

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

// #include <bsd/string.h>

// int main(void)
// {
// 	char *dst = "Hello";
// 	char *src = NULL;
// 	size_t size = 0;
// 	ft_strlcat(dst,src,size);
// 	printf("\"%s\"\n", dst);

// 	char *dst2 = "Hello";
// 	char *src2 = NULL;
// 	size_t size2 = 2;
// 	strlcat(dst2,src2,size2);
// 	printf("\"%s\"\n", dst2);
// 	return (0);
// }
