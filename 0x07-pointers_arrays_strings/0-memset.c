#include "main.h"

/**
 * _memset - fills string with constant char y upto x bytes
 * @s: input pointer to string
 * @y: constant char
 * @x: number of bytes
 * Return: pointer to s string
 */
char *_memset(char *s, char y, unsigned int x)
{
	unsigned int i = 0;

	while (i < x)
	{
		s[i] = y;
		i++;
	}
	return (s);
}
