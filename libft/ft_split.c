/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tmurua@student.42berlin.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:04:18 by tmurua            #+#    #+#             */
/*   Updated: 2023/12/05 12:22:31 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	char_in_str(const char c, const char *charset);
static size_t	count_words(const char *str, const char *charset);
static void		wordcpy(char *to, const char *from, const char *charset);
static void		word_split(char **splitted, const char *str, char *charset);

char	**ft_split(char const *s, char c)
{
	char	**sub_s;
	size_t	words;

	words = count_words(s, &c);
	sub_s = (char **)malloc(sizeof(char *) * (words + 1));
	if (sub_s == NULL)
		return (NULL);
	sub_s[words] = 0;
	word_split(sub_s, s, &c);
	return (sub_s);
}

static size_t	char_in_str(const char c, const char *charset)
{
	size_t	i;

	i = 0;
	if (c == '\0')
		return (1);
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	count_words(const char *s, const char *charset)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (char_in_str(s[i + 1], charset) == 1 && char_in_str(s[i],
				charset) == 0)
			words++;
		i++;
	}
	return (words);
}

static void	wordcpy(char *to_sub_s, const char *from_s, const char *charset)
{
	size_t	i;

	i = 0;
	while (char_in_str(from_s[i], charset) == 0)
	{
		to_sub_s[i] = from_s[i];
		i++;
	}
	to_sub_s[i] = '\0';
}

static void	word_split(char **split_sub_s, const char *s, char *charset)
{
	size_t	i;
	size_t	j;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (char_in_str(s[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (char_in_str(s[i + j], charset) == 0)
				j++;
			split_sub_s[word] = (char *)malloc(sizeof(char) * (j + 1));
			wordcpy(split_sub_s[word], s + i, charset);
			i = i + j;
			word++;
		}
	}
}
