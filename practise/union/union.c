#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		while(argv[1][i])
		{
			j = 0 + i;
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
				{
					write(1, &argv[1][i], 1);
					break;
				}
				j++;
			}
			i++;
		}

			j = 0;
			while (argv[2][j])
			{
				if (argv[2][j] != argv[1][i] && )
				{
					write(1, &argv[2][j], 1);
				}
				j++;
			}
			i++;
	
	}
	write(1, "\n", 1);
	return (0);
}
