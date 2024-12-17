#include <unistd.h>

int main(int argc, char *argv[])
{
	char *ptr = argv[1];
	char c;
	if (argc == 2)
	{
		int i = 0;

		while (ptr[i])
		{
			if (ptr[i] == '_')
			{
				i++;
				c = ptr[i] - 32;
				write(1, &c, 1);
			}
			else
			{
				write(1, &ptr[i], 1);
			}
			i++;
		}			
	}
	write(1, "\n", 1);
}
