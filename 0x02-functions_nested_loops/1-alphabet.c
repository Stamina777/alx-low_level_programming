#include "main.h"
/**
 * print-alphabets - function that prints alphabet in lower case
 *
 * Return: always 0;
 */

void print_alphabet(void);
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}
