#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char c;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while(argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 122 ) {
					c = 'z' - (argv[1][i] - 'a');
					write(1, &c, 1);
			}
			else{
					write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	return (0);
}
