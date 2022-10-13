#include "main.h"

/**
 * print_numbers - prints numbers from 0-9 followed by a new line character
 *
 * Return: void
 */

void print_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar(k + '0');
	}
	putchar('\n');
}
