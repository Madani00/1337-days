#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int start;

	char *ptr = argv[1];
	
	int len = strlen(ptr);

	if (argc == 2)
	{
		while (len >= 0)
		{
			while (ptr[len] == '\0' || ptr[len] == ' ')
				len--;
			while (ptr[len] != '\0' && ptr[len] != ' ')
				len--;
			start = len + 1;
			while (ptr[start] != '\0' && ptr[start] != ' ')
			{
				write(1, &ptr[start], 1);
				start++;
			}
			if (len >= 0)
				write(1, " ", 1);
		}

	}
	write(1, "\n", 1);
}
