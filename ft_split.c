/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:29:16 by wshee             #+#    #+#             */
/*   Updated: 2024/11/13 21:44:50 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	counter;
	int	i;
	int	in_word;

	i = 0;
	counter = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			counter++;
			in_word = 1;
		}
		if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (counter);
}

static char	**free_array(char **split_str, int word_index)
{
	while (word_index > 0)
	{
		word_index--;
		free(split_str[word_index]);
	}
	free(split_str);
	return (NULL);
}

static char	*put_words(char *word, char const *s, int i, int word_len, int word_index)
{
	int	j;

	j = 0;
	word = (char *) malloc(sizeof(char) * (word_len + 1));
	if (word == NULL)
	{
		free_array(&word, word_index);
		return (NULL);
	}
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = 0;
	return (word);
}

static char	**ft_word(char const *s, char c, int num_words, char **split_str)
{
	int	i;
	int	word_index;
	int	word_len;

	i = 0;
	word_index = 0;
	word_len = 0;
	while (word_index < num_words)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			word_len++;
			i++;
		}
		split_str[word_index] = put_words(split_str[word_index], s, i, word_len, word_index);
		word_len = 0;
		word_index++;
	}
	split_str[word_index] = 0;
	return (split_str);
}

char **ft_split(char const *s, char c)
{
	int 	num_words;
	char 	**split_str;

	if (s == NULL)
		return (NULL);
	num_words = count_words(s, c);
	split_str = (char**)malloc(sizeof(char*) * (num_words + 1));
	if (split_str == NULL)
		return (NULL);
	split_str = ft_word(s, c, num_words, split_str);
	return (split_str);
}

int main(void)
{
	char *str = "Welcome to 42KL";
	char c = ' ';
	char **res = ft_split(str, ' ');
	int num_words = count_words(str, c);
	int i = 0;
	while (i < num_words)
	{
		printf("Word[%d]: %s\n", i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
}
