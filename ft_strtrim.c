/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:11:15 by wshee             #+#    #+#             */
/*   Updated: 2024/11/10 17:02:04 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
//#include <string.h>

static int ft_isinset(const char *set, char c)
{
	size_t i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	size_t start;
	size_t end;
	size_t i;

	if (s1 == (NULL) || set == (NULL))
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_isinset(set, s1[start]) == 1)
		start++;
	while (end > start && ft_isinset(set, s1[end - 1]) == 1)
		end--;
	printf("Original string: %s == %lu\n", s1, end - start);
	trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (trim == (NULL))
		return (NULL);
	i = 0;
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim [i] = '\0';
	printf("Trimmed string: %s\n", trim);
	return (trim);
}

int main (void)
{
	char *s1 = "ttesg";
	char *set = "t";
	char *res = ft_strtrim(s1, set);
	printf("%s\n", res);
	free(res);
}
