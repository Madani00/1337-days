#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    *ft_strdup(char *src)
{
	return NULL;
	/*int i;
	char *new;

	i = 0;
	while(src[i])
		i++;
	
	new = malloc(sizeof(char) * i + 1);
	if (!new)
		return NULL;
	
	new = ft_strcpy(new, src);

	return (new);*/
}

int main()
{
    char *original = "whassup nigga";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);

        // Free the allocated memory for the duplicate string
        free(duplicate);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
