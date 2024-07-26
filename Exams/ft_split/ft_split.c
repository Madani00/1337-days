#include <stdlib.h>
#include <stdio.h>

char	*get_word(char **str)
{
	char	*start;

	start = *str;
	while (**str && **str != 32)
	{
    	(*str)++;
	}
	if (**str)
	{
    	**str = '\0';
    	(*str)++;
	}
	return (start);
}
char	*ft_strcpy_alloc(char *src)
{
	char	*dest;
	int    	i;

	i = 0;
	while (src[i] != '\0')
	{
    	i++;
	}
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
    	return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
    	dest[i] = src[i];
    	i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count(char *s)
{
	int	count;
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
    	while (s[i] == 32 && s[i])
    	{
        	i++;
        	count = 0;
    	}
    	while (s[i] != 32 && s[i])
    	{
        	i++;
        	count = 1;
    	}
    	if (count)
    	{
        	words += count;
    	}
	}
	return (words);
}
char	**ft_split(char *str)
{
	int    	len;
	char	**words;
	char	*kalima;
	int    	i;

	len = count(str);
	words = malloc(sizeof(char *) * (len + 1));
	if (!words)
    	return (NULL);
	i = 0;
	while (i < len)
	{
    	while (*str == 32)
    	{
        	str++;
    	}
    	kalima = get_word(&str);
    	words[i] = ft_strcpy_alloc(kalima);
    	if (!words[i])
    	{
        	return (NULL);
    	}
    	i++;
	}
	words[i] = NULL;
	return (words);
}

int main()
{
	char arr[] = "what a life";

	char **tokens = ft_split(arr);

	for (int i = 0; i < 3; i++) {
    	printf("%s\n", tokens[i]);
    	free(tokens[i]);
	}

	free(tokens);
	return 0;
}
