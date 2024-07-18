#include <stdio.h>


int	indexof_base(char c, int base)
{
	char base1[17] = "0123456789abcdef";

	while (base-- != 0)
	{
		if (base1[base] == c)
			return (base);
	}
	return (0);
}

int	check_if(char c, int base)
{
    
    char base1[17] = "0123456789abcdef";

	while (base-- != 0)
	{
		if (base1[base] == c)
			return (1);
	}
	return (0);
}

int	ft_atoi_base(char *str, int base)
{
	int final = 0;
	int i = 0;
	int op = 1;
	
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 32))
	    i++;
	while (str[i] == '+' || str[i] == '-')
	{
	    if (str[i] == '-')
	        op *= -1;
	    i++;
	}
	 while (check_if(str[i], base))
	 {
	     final = final * base + indexof_base(str[i], base);
	     i++;
	 }
	 return final * op;
}

int main ()
{
    printf("%d", ft_atoi_base("20", 8));
}
