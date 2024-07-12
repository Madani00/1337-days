#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	int j = 0;
	int flag;
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			flag = 1;
			j = j + 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					flag = 0;
					break;
				}
				j++;
			}
			if (flag){
				write(1, "0", 1);
				break;
			}
			i++;
		}
		if (!flag)
				write(1, "1", 1);
	}
	write(1, "\n", 1);
	return (0);
}
