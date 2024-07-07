/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamchart <eamchart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:14:23 by eamchart          #+#    #+#             */
/*   Updated: 2024/06/28 13:12:38 by eamchart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	e;
	int	swp;

	s = 0;
	e = size - 1;
	while (s < e)
	{
		swp = tab[s];
		tab[s] = tab[e];
		tab[e] = swp;
		s++;
		e--;
	}
}
