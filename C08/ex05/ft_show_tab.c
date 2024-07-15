/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamchart <eamchart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:25:06 by eamchart          #+#    #+#             */
/*   Updated: 2024/07/15 16:37:38 by eamchart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	int		k;

	i = 0;
	while (par[i].str)
	{
		k = 0;
		while (par[i].str[k])
		{
			write(1, &par[i].str[k], 1);
			k++;
		}
		write(1, "\n", 1);
		write(1, &(char){par[i].size + '0'}, 1);
		write(1, "\n", 1);
		k = 0;
		while (par[i].copy[k])
		{
			write(1, &par[i].copy[k], 1);
			k++;
		}
		write(1, "\n", 2);
		i++;
	}
}
