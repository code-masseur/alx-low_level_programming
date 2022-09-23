#include "main.h"

/**
 * _islower - checks if the input is lowercase
 *
 * @c: The character in ASCII code
 *
 * Returns: 1 if input is lowercase, and 0 is other case is true
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
