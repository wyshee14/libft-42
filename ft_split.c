/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:04:23 by wshee             #+#    #+#             */
/*   Updated: 2024/11/10 21:03:53 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char **free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return(0);
}

static int ft_count_words(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

char *ft_putword(char *word, char const *s, int i, int word_len)
{
	int j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char **ft_split_words(char const *s, char c, char **split_str, int num_words)
{
	int i;
	int word;
	int word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			word_len++;
		}
		split_str[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (split_str[word] == (NULL))
		{
			free_array(split_str, word);
			return (NULL);
		}
		ft_putword(split_str[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	split_str[word] = 0;
	return (split_str);
}

char **ft_split(char const *s, char c)
{
	char **split_str;
	unsigned int num_words;

	if (s == (NULL))
		return (NULL);
	num_words = ft_count_words(s, c);
	split_str = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (split_str == (NULL))
		return (NULL);
	split_str = ft_split_words(s, c, split_str, num_words);
	return (split_str);
}

int main(void)
{
	char *str = "Welcome to 42KL";
	char c = ' ';
	char **result = ft_split(str, c);
	int i = 0;
	int word_count = ft_count_words(str, c);
	while (i < word_count)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}
