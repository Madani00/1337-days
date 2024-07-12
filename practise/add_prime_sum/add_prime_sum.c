#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int ft_is_prime(int nb)
{
	int i;
	int negiro = 0;
    
	if (nb <= 1)
    	return (0);
   	 
	i = 2;
	while (i <= nb / 2)
	{
    	if (nb % i == 0)
    	{
        	negiro = 1;
        	break;
    	}
    	i++;
	}
	if (negiro)
    	return (0);
    return (1);
}

int main(int argc, char **argv)
{
	int n = atoi(argv[1]);
	int i;
	int sum = 0;

	if (argc != 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 2; i <= n; i++)
		{
			if (ft_is_prime(i))
			{
				sum += i;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
