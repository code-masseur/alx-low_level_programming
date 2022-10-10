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
	if (p < 0)
		p = p * -1;
	_putchar((p % 10) + '0');
	return (p + 10);
}
