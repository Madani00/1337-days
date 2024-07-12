#include <stdio.h>


int ft_atoi(char *str)
{
	int op = 1;
	int final = 0;
	
	while (*str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			op *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{	
		final = (final * 10) + (*str - '0');
		str++;
	}
	return (final * op);
}

int main(int ac, char **av)
{
	int n;
	int i;
	char *op = av[2];
	int n1 = ft_atoi(av[1]);
	int n2 = ft_atoi(av[3]);

	int res;

	if (ac == 4)
	{
		if (*op == '+')
            res = n1 + n2;
        else if (*op == '-')
            res = n1 - n2;
        else if (*op == '*')
            res = n1 * n2;
        else if (*op == '/')
			res = n1 / n2;
		printf("%d", res);
	}
	
	printf("\n");

	return (0);
}
