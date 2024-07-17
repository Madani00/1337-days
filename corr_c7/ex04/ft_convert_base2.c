/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrochd <rrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 07:55:13 by rrochd            #+#    #+#             */
/*   Updated: 2024/07/09 07:55:14 by rrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	nbr_length(int nbr, char *base, int length)
{
	int	base_length;
	int	n;

	base_length = ft_strlen(base);
	n = nbr;
	if (nbr < 0)
	{
		n = nbr * -1;
		length++;
	}
	while (n >= base_length)
	{
		n /= base_length;
		length++;
	}
	length++;
	return (length);
}

void	ft_putnbr_base(int nbr, char *base, char *str)
{
	int		length_base;
	long	nb;
	int		i;
	int		nbr_len;

	length_base = ft_strlen(base);
	nbr_len = nbr_length(nbr, base, 0) - 1;
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
		i = 1;
	}
	while (nb >= length_base)
	{
		str[nbr_len] = base[nb % length_base];
		nb /= length_base;
		nbr_len--;
	}
	if (nb < length_base)
		str[i] = base[nb];
}
