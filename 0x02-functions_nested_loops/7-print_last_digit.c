#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @p: digit used to find the last digit
 *
 * Return: Returns the value of the last digit (success)
 */

int print_last_digit(int p)
{
	int y; 
	int z;

	y = p % 10;
	if (y < 0)
		y = -y;
	z = '0' + y;
	_putchar(z);
	return (y);
}
