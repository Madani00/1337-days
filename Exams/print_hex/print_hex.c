#include <unistd.h>

int atoi(char *s)
{
	int i = 0;
	int res = 0;
	int signe = 1;

	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			signe *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * signe);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_puthex(int i)
{
	//int i = atoi(s);
	char *s = "0123456789abcdef";

	if (i >= 16)
		ft_puthex(i / 16);
	ft_putchar(s[i % 16]);
		
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i = atoi(argv[1]);
		ft_puthex(i);
	}
	write(1, "\n", 1);
}
