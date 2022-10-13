#include <stdio.h>
#include "main.h"

/**
 * _isupper - takes a character and chekcs if it is uppercase
 * or lowercase
 * @c: automatic variable to hold the character passed to the function
 *
 * Return: returns 1 if upper, 0 if otherwise
 */

int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
	{
		result = 1;
		return (result);
	}
	else
	{
		result = 0;
		return (result);
	}
}
