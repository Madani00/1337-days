/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamchart <eamchart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:30:56 by eamchart          #+#    #+#             */
/*   Updated: 2024/07/08 17:31:02 by eamchart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	negiro;

	negiro = 0;
	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			negiro = 1;
			break ;
		}
		i++;
	}
	if (negiro)
		return (0);
	return (1);
}

/*  simple virsion
int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return (0); // Not prime if nb <= 1

    i = 2;
    while (i * i <= nb) // Check up to the square root of nb
    {
        if (nb % i == 0)
            return (0); // If divisible, not prime
        i++;
    }
    return (1); // Prime if no divisors found
}
*/
