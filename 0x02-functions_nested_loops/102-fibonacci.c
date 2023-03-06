#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: nothing
 */

int main(void)

{
	int i;
	int sum;

	sum = 0;
	for (i = 0 ; i < 10 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
