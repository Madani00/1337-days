#include <unistd.h>

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
			{
				argv[1][i] += 1;
			}
			if (argv[1][i] == 'z')
			{
				argv[1][i] -= 25;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
