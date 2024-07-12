
#include <stdio.h>
#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int *block;
	int i, len;
	int k;
	int e;

	len = 0;
	if (end > start){
			len = end - start + 1;
	}
	else
	{
			len = start - end + 1;
	}
	block = malloc(sizeof(int) * len + 1);
	if (!block)
			return NULL;

	k = 0;
	while (k < len)
	{
		if (end > start){
			block[k] = start++;
		}
		else
		{
			block[k] = start--;
		}
		k++;
	}
	block[k] = '\0';
	
	return (block);
}

int main() {
    int start, end;

    // Example 1: Increasing range
    start = 3;
    end = 7;
    int *range = ft_range(start, end);
    if (range) {
        printf("Range from %d to %d:\n", start, end);
        for (int i = 0; i <= (end - start); i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range);
    } else {
        printf("Memory allocation failed\n");
    }

    // Example 2: Decreasing range
    start = 0;
    end = -3;
    range = ft_range(start, end);
    if (range) {
        printf("Range from %d to %d:\n", start, end);
        for (int i = 0; i <= 3; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
