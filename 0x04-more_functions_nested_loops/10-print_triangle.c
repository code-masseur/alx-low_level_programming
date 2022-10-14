#include "main.h"

/**
 * print_triangle - prints a traingular shape to the output stream
 * @size: variable that determines the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{
				putchar(32);
			}

			for (c = 0; c <= a; c++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
