#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char arr[12];
	int i;
	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		arr[i] = '-';
	}
	while (nb >= 10)
	{
		arr[i] = (nb % 10 + '0');
		i++;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	while (i >= 0)
	{
		ft_putchar(arr[i]);
		i--;
	}
}
int main()
{
	ft_putnbr(233);
	ft_putchar('\n');
}
