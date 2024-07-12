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

char    **ft_split(char *str)
{
	int i;
	int count = 0;
	char **words;
		
	if (str == NULL)
		return NULL;

	i = 0;
	while(str[i])
	{
		if (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
			count += 1;
		i++;
		words = malloc(sizeof(char *) * (count + 1));
		if (words == NULL)
			return NULL;

	}
	
}

int main() {
  	char *test_string = "This is a string with   spaces  and tabs\n";
  	char **split_words;

  	// Call ft_split to split the string
  	split_words = ft_split(test_string);

  	// Check if ft_split returned NULL (error)
  	if (split_words == NULL) {
    	printf("Error: ft_split failed\n");
    	return 1;
  	}

  	// Print each word in the split_words array
  	int i = 0;
  	while (split_words[i] != NULL) {
    	printf("%s\n", split_words[i]);
    	i++;
  	}

  	// Free the memory allocated by ft_split (assuming it allocates memory)
  	for (i = 0; split_words[i] != NULL; i++) {
    	free(split_words[i]); // Free each individual word string
  	}
  	free(split_words); // Free the main array of pointers

  	return 0;
}


