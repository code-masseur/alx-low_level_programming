#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: String pointer
 *
 * Return: 0 or decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, decimal = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal <<= 1;

		if (b[i] == '1')
			decimal ^= 1;
		i++;
	}
	return (decimal);
}
