/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamchart <eamchart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:17:37 by eamchart          #+#    #+#             */
/*   Updated: 2024/07/10 20:46:15 by eamchart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
void	ft_sort_tab(int size, char **tab)
{
	char *swap;
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0 && strcmp(tab[j-1], tab[j]) > 0)
		{
			swap = tab[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = swap;
			j--;
		}
		i++;
	}
}
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	ft_sort_tab(argc - 1, argv + 1);
	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
