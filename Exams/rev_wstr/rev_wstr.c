#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int start;

	char *ptr = argv[1];
	
	int len = strlen(ptr);

	if (argc == 2)
	{
		while (len >= 0)
		{
			while (ptr[len] == '\0' || ptr[len] == ' ')
				len--;
			printf("%c", ptr[len]);
			while (ptr[len] != '\0' && ptr[len] != ' ')
				len--;
			start = len + 1;
			while (ptr[start] != '\0' && ptr[start] != ' ')
			{
				write(1, &ptr[start], 1);
				start++;
			}
			if (len >= 0)
				write(1, " ", 1);
		}

	}
	write(1, "\n", 1);
}




// void ft_rev(char *s)
// {
// 	int i = 0;
// 	int start;
// 	int space;
// 	while (s[i])
// 		i++;
// 	while (i >= 0)
// 	{
// 		while (s[i] == '\0' || s[i] == ' ' || s[i] == '\t')
// 			i--;
// 		while(s[i] != '\0' && s[i] != ' ' && s[i] != '\t')
// 			i--;
// 		start = i + 1;
// 		space = start;
// 		while (s[start] != '\0' && s[start] != ' ' && s[start] != '\t')
// 		{
// 			write(1, &s[start], 1);
// 			start++;
// 		}
// 		if (space != 0)
// 			write(1, " ", 1);
// 	}
// }
// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 		ft_rev(argv[1]);
// 	write(1, "\n", 1);
// }
