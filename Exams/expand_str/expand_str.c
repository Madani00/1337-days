#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int flag = 0;
	char *ptr = argv[1];
	if (argc == 2)
	{
		int yes;
		int y2;
		while (*ptr)
		{
			yes = 0;
			while (*ptr && (*ptr == 32 || (*ptr >= 9 && *ptr <= 13)))
				ptr++;
			while (*ptr && !(*ptr == 32 || (*ptr >= 9 && *ptr <= 13)))
			{
   		 		write(1, ptr, 1);
				ptr++;
				yes = 1;
			}
			while (*ptr && (*ptr == 32 || (*ptr >= 9 && *ptr <= 13)))
				ptr++;
			if (yes && *ptr)
				write(1, "   ", 3);
		}
	}
	write(1, "\n", 1);
	return (0);
}

