/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:36:00 by wshee             #+#    #+#             */
/*   Updated: 2024/11/14 11:35:26 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == (NULL) || f == (NULL))
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

void	f(unsigned int i, char *c)
{
	*c = *c + 32;
}

//apply function f on string change the string directly
//f changes the index (int i) on each address of the string
// int main(void)
// {
// 	char s[] = "HELLO";
// 	ft_striteri(s, f);
// 	printf("%s\n", s);
// }
