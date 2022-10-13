#include "main.h"

/**
 * print_square - prints square to the screen
 * @size: variable to determine the size of the square in the loop
 *
 * Return: return void
 */

void print_square(int size)
{
	int y;
	int z;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			for (z = 0; z < size; z++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
