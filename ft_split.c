/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 17:26:54 by MP9               #+#    #+#             */
/*   Updated: 2025/07/09 14:21:14 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	size_t	wc;
	size_t	i;

	wc = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			wc++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (wc);
}

static char	*one_word(const char *s, char c, size_t	*i)
{
	size_t	start;
	char	*word;

	start = 0;
	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] != '\0' && s[*i] != c)
		(*i)++;
	word = (char *)malloc(sizeof(char) * (*i - start + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, *i - start + 1);
	return (word);
}

static char	**fill_words(char **words, const char *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words[j] = one_word(s, c, &i);
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
	words[j] = NULL;
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

// int	main()
// {
// 	ft_split(" Hello W o r l d !    A", ' ');
// }