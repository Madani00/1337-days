#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base, char *nbrf);
int		nbr_length(int nbr, char *base, int length);

int	handle_sign(char *str, int *ii)
{
	int	sign;
	int	i;

	sign = 1;
	i = *ii;
	while ((str[i] != '\0') && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ii = i;
	return (sign);
}

int	is_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ' || str[i] == '-'
			|| str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nbr_base(char str, char *base)
{
	int	nbr;

	nbr = 0;
	while (base[nbr] != '\0')
	{
		if (str == base[nbr])
			return (nbr);
		nbr++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nbr;
	int	nbr2;
	int	base_length;

	nbr = 0;
	i = 0;
	base_length = is_valid(base);
	if (base_length < 2)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = handle_sign(str, &i);
	nbr2 = nbr_base(str[i], base);
	while (nbr2 != -1)
	{
		nbr = (nbr * base_length) + nbr2;
		i++;
		nbr2 = nbr_base(str[i], base);
	}
	return (nbr *= sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		n;
	int		nbr_len;

	if (!is_valid(base_to) || !is_valid(base_from))
		return (0);
	n = ft_atoi_base(nbr, base_from);
	nbr_len = nbr_length(n, base_to, 0);
	str = malloc(sizeof(char) * (nbr_len + 1));
	if (str == NULL)
		return (0);
	ft_putnbr_base(n, base_to, str);
	str[nbr_len] = '\0';
	return (str);
}
