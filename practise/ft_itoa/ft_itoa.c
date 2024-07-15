#include <stdlib.h>
#include <stdio.h>

int n_len(int n)
{
    int len = 0;

    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        n = -n;
        len = 1;
    }
    while (n > 0)
    {  
        len++;
        n = n / 10;
    }
    return (len);
}
char *ft_itoa(int nbr)
{
    long int n = nbr;
    int len  = n_len(nbr);
    char  *final;
    int i;
    final = malloc(sizeof(char) * len);
    if (n == 0)
    {
        final[0] = n + '0';
    }
    if (n < 0)
    {
        n = -n;
        final[0] = '-';
    }
    while (n > 0)
    {  
        final[--len] = n % 10 + '0';
        n = n / 10;
    }

    return (final);
}

int main()
{
    printf("%s\n", ft_itoa(15.00));
}