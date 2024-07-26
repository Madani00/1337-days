#include <stdio.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if (s1[i] == s2[j]) {
				return ((char *)&s1[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
    const char *str1 = "hello world";
    const char *str2 = "majik";
    char *result = ft_strpbrk(str1, str2);

    if (result != NULL) {
        printf("First matching character: %c\n", *result);
    } else {
        printf("No matching character found.\n");
    }

    return 0;
}
