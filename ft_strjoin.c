/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:26:56 by wshee             #+#    #+#             */
/*   Updated: 2024/11/10 14:15:52 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *strjoin;

	if (s1 == (NULL) || s2 == (NULL))
		return (NULL);
	strjoin = (char *)malloc((ft_strlen(s1) + ft_strlen (s2) + 1) * sizeof(char));
	if (strjoin == (NULL))
		return (NULL);
	ft_strlcpy(strjoin, s1, ft_strlen(s1) + 1);
	ft_strlcat(strjoin, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (strjoin);
}

int main (void)
{
	char *s1 = "Hello";
	char *s2 = " World";
	char *res = ft_strjoin(s1, s2);
	printf("%s\n", res);
	free(res);
}
