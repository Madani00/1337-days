#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int detect = 1;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0 + i;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					detect = 0;	
					break;
				}
				else
				{
					detect = 1;
				}
				j++;
			}
			if (detect == 1)
				break;
			i++;
		}
	}

	if (detect == 0)
	{
		i = 0;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
