#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: nothing
 */

int main(void)

{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%1d, j);
		else if (i == 1)
			ptintf(", %1d", k);
		else
		{
			k += j;
			j = k -j;
		printf(", %ld", k);
		}
	++i;
	}
	printf("\n");
	return (0);
}