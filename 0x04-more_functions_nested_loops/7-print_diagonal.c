#include "main.h"

/**
 * print_diagonal - prints a diagonal line to the screen
 * @n: interger given to the function to set how many times to run the loop
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int y;
	int z;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			for (z = 0; z < y; z++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
