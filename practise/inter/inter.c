#include <unistd.h>
int seen(char *s, char c, int a)
{
	int i = 0;
	while (i < a)
	{
		if (s[i] == c)
			return 1;

		i++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i]) 
		{
			if	(!seen(argv[1], argv[1][i], i))
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j])
					{
						write(1, &argv[1][i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}

	write(1, "\n", 1);
	return (0);
}
