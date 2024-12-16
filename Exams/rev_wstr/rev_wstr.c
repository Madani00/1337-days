#include <unistd.h>

void ft_rev(char *s)
{
	int i = 0;
	int start;
	int space;
	while (s[i])
		i++;
	while (i >= 0)
	{
		while (s[i] == '\0' || s[i] == ' ' || s[i] == '\t')
			i--;
		while(s[i] != '\0' && s[i] != ' ' && s[i] != '\t')
			i--;
		start = i + 1;
		space = start;
		while (s[start] != '\0' && s[start] != ' ' && s[start] != '\t')
		{
			write(1, &s[start], 1);
			start++;
		}
		if (space != 0)
			write(1, " ", 1);
	}
}
int main(int argc, char *argv[])
{
	if (argc == 2)
		ft_rev(argv[1]);
	write(1, "\n", 1);
}
