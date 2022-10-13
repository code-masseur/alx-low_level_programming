#include "main.h"

/**
 * more_numbers - prints numbers 0-14 10 times, each on a new line
 * @e: first auto integer to be used by the function
 * @f: second auto variable to be used by the function
 *
 * Return: void
 */

void more_numbers(void)
{
	int e;
	int f;

	for (e = 0; e < 10; e++)
	{
		for (f = 0; f <= 14; f++)
		{
			if (f > 9)
			{
				putchar((f / 10) + '0');
			}
			putchar((f % 10) + '0');
		}
		putchar('\n');
	}
}
