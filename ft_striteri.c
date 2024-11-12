/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:36:00 by wshee             #+#    #+#             */
/*   Updated: 2024/11/11 16:08:42 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	if (s == (NULL) || f == (NULL))
		return;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

void f(unsigned int i, char* c)
{
	*c = *c + 32;
}

int main(void)
{
	char s[] = "HELLO";
	ft_striteri(s, f);
	printf("%s\n", s);
}