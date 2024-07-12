#include <stdio.h>

int main()
{
    char ar[] = "hi mada ni";
    int i = 0;
    int count = 0;

    while(ar[i])
	{
		if (!(ar[i] == 32 || (ar[i] >= 9 && ar[i] <= 13)))
			count += 1;
        i++;
    }
    printf("%d\n", count);
}