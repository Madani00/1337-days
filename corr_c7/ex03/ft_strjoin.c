/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrochd <rrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:26:35 by rrochd            #+#    #+#             */
/*   Updated: 2024/07/07 10:28:18 by rrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
