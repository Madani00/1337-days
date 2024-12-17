#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int ptr;
	int p2;
	int c;
	int small;

	if (argc == 3)
	{
		ptr = atoi(argv[1]);                // be careful you need to check the (argc == 3) first before changing the value of argv[]
    p2 = atoi(argv[2]);
		int i = 1;
		if (ptr > p2)
                	small = p2;
        	else
                	small = ptr;
		while (i <= small)
		{
			if (ptr % i == 0 && p2 % i == 0)
			{
				c = i;
			}
			i++;
		}
		printf("%d", c);		
	}
	printf("\n");
}
