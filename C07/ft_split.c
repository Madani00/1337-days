#include <stdio.h>
#include <stdlib.h>

int		is_delim(char c, char *delim);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*get_word(char *str, char *delim)
{
	char	*start;

	start = str;
	while (*str && !(is_delim(*str, delim)))
	{
		str++;
	}
	if (*str)
	{
		*str = '\0';
		str++;
	}
	return (start);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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
		kalima = get_word(str, charset);
		words[i] = malloc(ft_strlen(kalima) + 1);
		ft_strcpy(words[i], kalima);
		i++;
		str += ft_strlen(kalima) + 1;
	}
	words[i] = NULL;
	return (words);
}
