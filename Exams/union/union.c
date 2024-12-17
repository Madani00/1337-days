#include <unistd.h>


int check(char *ptr, int max, char c)
{
	int i = 0;
	while(ptr[i] && i < max)
	{
		if (ptr[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i;

	if (argc == 3)
	{
		char  *p1 = argv[1];
		char  *p2 = argv[2];
	
		i = 0;
		while(p1[i])
		{
			if (check(p1, i, p1[i]))
				write(1, &p1[i], 1);
			i++;
		}
		i = 0;
                while(p2[i])
                {
                        if (check(p2, i, p2[i]) && check(p1, i, p2[i]))
                                write(1, &p2[i], 1);
                        i++;
                }

	}
	write(1, "\n", 1);
	return (0);
}
