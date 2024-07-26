#include <stdio.h>


int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int max = 0;

	if (!tab)
		return 0;
	while (i < len && tab[i])
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return max;
}

int main() {
  // Test max function
  int numbers[] = {};
  unsigned int length = sizeof(numbers) / sizeof(numbers[0]); // Get array size
  int maximum = max(numbers, length);
  printf("Maximum value in the array: %d\n", maximum);

}
