#include "main.h"

/**
 * print_line - prints a straight line on the screen
 *
 * Return: Void
 */

void print_line(int n)
{
	int z;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (z = 0; z < n; z++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
