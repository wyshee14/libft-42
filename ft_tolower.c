/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:24:25 by wshee             #+#    #+#             */
/*   Updated: 2024/11/14 13:12:19 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'a' && c <= 'z')
		c += 32;
	return (c);
}

// int main (void)
// {
// 	char *str = "ABCDEF";
// 	int i = 0;
// 	int n = 0;
// 	while (str[n] != '\0')
// 		n++;
// 	while (i < n)
// 	{
// 		char c = str[i];
// 		c = ft_tolower(c);
// 		printf("%c", c);
// 		i++;
// 	}
// 	printf("\n");
// }
