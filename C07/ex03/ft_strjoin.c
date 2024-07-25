/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamchart <eamchart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:27:50 by eamchart          #+#    #+#             */
/*   Updated: 2024/07/13 16:36:21 by eamchart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src, char *sep, int size)
{
	int	j;
	int	d;

	j = 0;
	while (src[j])
	{
		*dest = src[j];
		j++;
		dest++;
	}
	if (size != 0)
	{
		d = 0;
		while (sep[d])
		{
			*dest = sep[d];
			d++;
			dest++;
		}
	}
	if (size == 0)
		*dest = '\0';
	return (dest);
}

int	string_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (size-- != 0 && strs[i])
	{
		len += ft_strlen(strs[i]);
		if (size != 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*word;
	char	*start;
	int		len;

	len = 0;
	len = string_len(size, strs, sep);
	word = malloc((sizeof(char) * len) + 1);
	if (!word)
		return (NULL);
	if (size == 0)
	{
		*word = '\0';
		return (word);
	}
	start = word;
	i = 0;
	while (size-- != 0)
	{
		word = ft_strcat(word, strs[i], sep, size);
		i++;
	}
	return (start);
}
/*
another way to do it


int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		if (i + 1 < size)
		{
			length += ft_strlen(sep);
		}
		i++;
	}
	return (length);
}

void	concatenate_strings(char *dest, int size, char **strs, char *sep)
{
	int		count;
	char	*tmp;
	int		i;

	count = 0;
	i = 0;
	while (i < size)
	{
		tmp = strs[i];
		while (*tmp)
		{
			dest[count++] = *tmp++;
		}
		if (i + 1 < size)
		{
			tmp = sep;
			while (*tmp)
			{
				dest[count++] = *tmp++;
			}
		}
		i++;
	}
	dest[count] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	char	*dest;

	length = calculate_total_length(size, strs, sep);
	dest = malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	concatenate_strings(dest, size, strs, sep);
	return (dest);
}
*/
