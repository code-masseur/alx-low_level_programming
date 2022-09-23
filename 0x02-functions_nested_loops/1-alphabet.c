#include "main.h"

/**
 * main - prints alphabets in lowercase
 * Return: always 0 (success)
 */
void print_alphabet(void) /* this function gets all lowercase alphabets*/
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
