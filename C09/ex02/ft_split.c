/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamchart <eamchart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:13:38 by eamchart          #+#    #+#             */
/*   Updated: 2024/07/18 13:42:07 by eamchart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_delim(char c, char *delim)
{
	while (*delim)
	{
		if (*delim == c)
		{
			return (1);
		}
		delim++;
	}
	return (0);
}

char	*get_word(char **str, char *delim)
{
	char	*start;

	start = *str;
	while (**str && !is_delim(**str, delim))
	{
		(*str)++;
	}
	if (**str)
	{
		**str = '\0';
		(*str)++;
	}
	return (start);
}

char	*ft_strcpy_alloc(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count(char *s, char *deli)
{
	int	count;
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (is_delim(s[i], deli) && s[i])
		{
			i++;
			count = 0;
		}
		while (!(is_delim(s[i], deli)) && s[i])
		{
			i++;
			count = 1;
		}
		if (count)
			words += count;
	}
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	int		len;
	char	**words;
	char	*kalima;
	int		i;

	len = count(str, charset);
	words = malloc(sizeof(char *) * (len + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (is_delim(*str, charset))
		{
			str++;
		}
		kalima = get_word(&str, charset);
		words[i] = ft_strcpy_alloc(kalima);
		if (!words[i])
			return (NULL);
		i++;
	}
	words[i] = NULL;
	return (words);
}

/*
here's another way to do it

int	is_separator(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (is_separator(*str, charset))
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char	*allocate_word(char *src, int size)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (i < size)
	{
		word[i] = src[i];
		i++;
	}
	word[size] = '\0';
	return (word);
}

void	extract_words(char *str, char *charset, char **strings)
{
	int		word_pos;
	char	*start;

	word_pos = 0;
	while (*str)
	{
		if (is_separator(*str, charset))
			str++;
		else
		{
			start = str;
			while (*str && !is_separator(*str, charset))
			{
				str++;
			}
			strings[word_pos] = allocate_word(start, str - start);
			word_pos++;
		}
	}
	strings[word_pos] = 0;
}

char	**ft_split(char *str, char *charset)
{
	int		words_count;
	char	**strings;

	words_count = count_words(str, charset);
	strings = malloc((words_count + 1) * sizeof(char *));
	if (strings == 0)
		return (0);
	extract_words(str, charset, strings);
	return (strings);
}

*/
