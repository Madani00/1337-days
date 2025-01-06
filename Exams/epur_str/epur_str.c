#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{

	char *ptr = argv[1];
	if (argc == 2)
	{
		int yes = 0;
		while (*ptr)
		{
			while (*ptr && (*ptr == 32 || (*ptr >= 9 && *ptr <= 13)))
				ptr++;
			while (*ptr && !(*ptr == 32  || (*ptr >= 9 && *ptr <= 13)))
			{
   		 		write(1, ptr, 1);
				yes = 1;
				ptr++;
			}
			while (*ptr && (*ptr == 32 || (*ptr >= 9 && *ptr <= 13)))
				ptr++;
			if (*ptr && yes)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
