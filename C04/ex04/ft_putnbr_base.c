/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamchart <eamchart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:57:49 by eamchart          #+#    #+#             */
/*   Updated: 2024/07/08 14:00:35 by eamchart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_char(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	num;

	base_len = 0;
	num = nbr;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-')
			return ;
		base_len++;
	}
	if (base_len < 2)
		return ;
	if (check_char(base, base_len))
		return ;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num >= base_len)
	{
		ft_putnbr_base(num / base_len, base);
	}
	ft_putchar(*(base + num % base_len));
}
