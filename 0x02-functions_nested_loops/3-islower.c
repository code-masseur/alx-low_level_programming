#include "main.h"

/**
 * 3-islower.c - checks if the input is lowercase
 *
 * Returns - 1 if input is lowercase, and 0 is other case is true
 */
int islower(int c)
{
	if (c <= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
