/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:23:08 by wshee             #+#    #+#             */
/*   Updated: 2024/11/07 15:56:33 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int x, unsigned int n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p++ = (unsigned char)x;
	}
	return (s);
}

#include <stdio.h>
int main()
{
	char s[] = "Hello my name is Bello.";
	ft_memset((s + 17), 'X', 5);
	printf("%s\n", s);
}

