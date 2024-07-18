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
