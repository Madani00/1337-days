#include <unistd.h>

int		main(int argc, char **argv)
{
	char *str = argv[1];

	if (argc == 2)
	{
		  int j = 0;
		  int i = 0;

		  while (str[i])
		  {
			  if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
				  j = i + 1;           // to track of the start index of the last word
			  i++;
		  }
		  while (str[j] >= 33 && str[j] <= 127)
		  {
			  write(1, &str[j], 1);
			  j++;
		  }
	  }
	  write(1, "\n", 1);
}
