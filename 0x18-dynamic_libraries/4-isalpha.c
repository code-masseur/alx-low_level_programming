#include "main.h"

/**
 * _isalpha - check for alphabetic character,
 *
 * @c: is the character in ANSI code
 *
 * Return: return 1 if true, 0 if other case
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
