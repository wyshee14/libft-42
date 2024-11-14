/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:29:16 by wshee             #+#    #+#             */
/*   Updated: 2024/11/14 15:03:22 by wshee            ###   ########.fr       */
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

static int	count_word_len(char const *s, char c, int word_index)
{
	int word_len;
	int word_index;
	int i;
	int num_words;

	word_len = 0;
	word_index = 0;
	i = 0;
	num_words = count_words(s, c);
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			word_len++;
			i++;
		}
		word_len = 0;
		word_index++;
	}
	return(word_len);
}

static char	**free_array(char **split_str, int word_index)
{static int	count_word_len(char const *s, char c, int word_index)
{
	int word_len;
	int word_index;
	int i;
	int num_words;

	word_len = 0;
	word_index = 0;
	i = 0;
	num_words = count_words(s, c);
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			word_len++;
			i++;
		}
		word_len = 0;
		word_index++;
	}
	return(word_len);
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
	while (word_index > 0)
	{
		word_index--;
		free(split_str[word_index]);
	}
	free(split_str);
	return (NULL);
}

static char	*put_words(char *word, char const *s, int *ptr, int word_index)
{
	int	j;
	int word_len;

	j = 0;
	word_len = count_word_len(s, c);
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

// static char	**ft_word(char const *s, char c, int num_words, char **split)
// {
// 	int	i;
// 	int	word_index;
// 	int	word_len;

// 	i = 0;
// 	word_index = 0;
// 	word_len = 0;
// 	while (word_index < num_words)
// 	{
// 		while (s[i] == c && s[i] != '\0')
// 			i++;
// 		while (s[i] != c && s[i] != '\0')
// 		{
// 			word_len++;
// 			i++;
// 		}
// 		split[word_index] = put_words(split[word_index], s, i, word_len, word_index);
// 		word_len = 0;
// 		word_index++;
// 	}
// 	split[word_index] = 0;
// 	return (split);
// }

char **ft_split(char const *s, char c)
{
	int 	num_words;
	char 	**split;
	int		word_index;
	int		i;
	int		word_len;

	word_index = 0;
	i = 0;
	word_len = 0;
	if (s == NULL)
		return (NULL);
	num_words = count_words(s, c);
	split = (char**)malloc(sizeof(char*) * (num_words + 1));
	if (split == NULL)
		return (NULL);
	while (word_index < num_words)
	{
		// while (s[i] == c && s[i] != '\0')
		// 	i++;
		// while (s[i] != c && s[i] != '\0')
		// {
		// 	word_len++;
		// 	i++;
		// }

		split[word_index] = put_words(split[word_index],s, &i, word_index);
		word_len = 0;
		word_index++;
	}
	split[word_index] = 0;
	return (split);
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
