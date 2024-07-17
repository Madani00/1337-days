/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamchart <eamchart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:25:06 by eamchart          #+#    #+#             */
/*   Updated: 2024/07/17 08:58:32 by eamchart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

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
		ft_putnbr(par[i].size);
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
