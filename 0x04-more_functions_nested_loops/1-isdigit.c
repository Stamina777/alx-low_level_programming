#include "main.h"

/**
 * _isdigit - checks if a character is a  digit
 * @x: the number to be checked
 * Return: 1 or 0
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
