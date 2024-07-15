#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str *ptr;

	ptr  = malloc(sizeof(t_stock_str) * (ac  + 1));
	if (!ptr)
			return (NULL);
	i = 0;
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = malloc(sizeof(char) * (ptr[i].size + 1));
		if (!ptr[i].copy)
				return (NULL);
		ptr[i].copy = ft_strcpy(ptr[i].copy, av[i]);
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}

int main(void)
{
    char *arr[] = {"Hello", "world", "This", "is", "a", "test"};
    int size = 6;
    t_stock_str *result;
    int i;

    result = ft_strs_to_tab(size, arr);

    if (!result)
    {
        printf("Memory allocation failed!\n");
        return (1);
    }

    i = 0;
    while (i < size)
    {
        printf("Index %d:\n", i);
        printf("Original string: %s\n", result[i].str);
        printf("Copied string: %s\n", result[i].copy);
        printf("String length: %d\n", result[i].size);
        i++;
    }

    // Free allocated memory
    i = 0;
    while (i < size)
    {
        free(result[i].copy);
        i++;
    }
    free(result);

    return (0);
}
