#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int start;

	char c;
	int len = 0;

	if (argc > 1)
    	{
        	for (int i = 1; i < argc; i++) // Loop through each argument
        	{
			char *ptr = argv[i];
			len = 0;
			while (ptr[len])
			{
				if (ptr[len+1] == '\0' || ptr[len+1] == ' ')
				{
					if (ptr[len] >= 'a' && ptr[len] <= 'z')
					{
						c = ptr[len] - 32;
						write(1, &c,1);
					}
					else
						write(1, &ptr[len], 1);
			
				}
				else if (ptr[len] >= 'A' && ptr[len] <= 'Z')
				{
					c = ptr[len] + 32;
					write(1, &c, 1);
				}
				else
					write(1, &ptr[len], 1);
				len++;
			}
			write(1, "\n", 1);
		}
	}
	write(1, "\n", 1);
}
