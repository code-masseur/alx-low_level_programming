#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 excluding 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <=9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			putchar(x + '0');
		}
	}
	putchar('\n');
}
