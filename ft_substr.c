/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:39:02 by wshee             #+#    #+#             */
/*   Updated: 2024/11/13 16:10:46 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t s_len;
	size_t i;

	if (s == (NULL))
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (NULL);
	if (start + len > s_len)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == (NULL))
		return (NULL);

	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main (void)
// {
// 	char *s = "Hello World";
// 	char *res = ft_substr(s, 0, 5);
// 	printf("%s\n", res);
// 	free(res);
// }
