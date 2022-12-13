#include "main.h"

/**
 * _isdigit - checks from 0-9 to see if it's a digit
 * @c: An automatic integer variable to be used by the function
 *
 * Return: returns 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
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
