/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamchart <eamchart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:38:41 by eamchart          #+#    #+#             */
/*   Updated: 2024/07/07 18:39:04 by eamchart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if ((nb == 0 && power == 0) || power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
