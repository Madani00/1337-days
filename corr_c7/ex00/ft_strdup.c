/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrochd <rrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:26:21 by rrochd            #+#    #+#             */
/*   Updated: 2024/07/07 10:26:41 by rrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dup;

	if (!src)
		return (0);
	src_len = ft_strlen(src);
	dup = malloc((src_len + 1) * sizeof(char));
	if (!dup)
		return (0);
	ft_strcpy(dup, src);
	return (dup);
}
