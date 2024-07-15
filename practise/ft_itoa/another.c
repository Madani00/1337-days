#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
    int n = nbr;
    char  *final;
    int i;

    if (nbr == -2147483648)
    {
        final = malloc(sizeof(char) * 12);
        i = 0;
        while (i < 11) {
            final[i] = "-2147483648"[i];
            i++;
        }
        final[11] = '\0';
    } 
    return (final);
}