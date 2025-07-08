/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:26:54 by MP9               #+#    #+#             */
/*   Updated: 2025/07/08 19:35:45 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	size_t	wc;

	wc = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			wc++;
			while (*s != c)
				s++;
		}
		else
			s++;
	}
	return (wc);
}

static char	*one_word(const char *s, char c, size_t *i)
{
	size_t	start;
	char	*word;

	while (s[*i] == c)
		i++;
	start = *i;
	while (s[*i] != '\0' && s[*i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (*i - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && s[start] != c)
	{
		word[*i] = s[start];
		i++;
		start++;
	}
	return (word);
}

static char	**fill_words(char **words, const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			*words[j] = *one_word(s, c, &j);
			if (!words[j])
			{
				while (j > 0)
					free (words[--j]);
				free (words);
				return (NULL);
			}
			j++;
		}
		else
			i++;
	}
	words[j] = '\0';
	return (words);
}

char	**ft_split(const char *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!words)
		return (NULL);
	return (fill_words(words, s, c));
}
