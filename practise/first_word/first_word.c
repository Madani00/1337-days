#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char d;

	if (argc == 2)
	{
		i = 0;
		while(argv[1][i])
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			while ((argv[1][i] != ' ' || argv[1][i] != '\t') && argv[1][i] != '\0')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			break;
		}
	}
	write(1, "\n", 1);
	return (0);
}
