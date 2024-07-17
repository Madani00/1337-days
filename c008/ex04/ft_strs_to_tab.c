/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamchart <eamchart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:18:40 by eamchart          #+#    #+#             */
/*   Updated: 2024/07/16 21:39:00 by eamchart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ptr;

	ptr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = malloc(sizeof(char) * (ptr[i].size + 1));
		if (!ptr[i].copy)
		{
			return (NULL);
		}
		ptr[i].copy = ft_strcpy(ptr[i].copy, av[i]);
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}
