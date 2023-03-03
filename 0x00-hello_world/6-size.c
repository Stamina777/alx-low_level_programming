#include <stdio.h>

/**
 * main - main function
 * Return: 0 on success
 */

int main(void)
{
	printf("size a of char: %lu byte(s)", sizeof(char));
	printf("size an of int: %lu byte(s)", sizeof(int));
	printf("size a of long int: %lu byte(s)", sizeof(long int));
	printf("size a of long long int: %lu byte(s)", sizeof(long long int));
	printf("size a of float: %lu byte(s)", sizeof(float));
	return (0);
}
