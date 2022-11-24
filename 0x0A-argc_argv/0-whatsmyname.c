#include <stdio.h>
#include <stdlib.h>

/**
 * main - main prints its name, also prints the new name if renamed anytime
 * without re-compilling the program
 * @argc: parameter to hold the argument count to main
 * @argv: parameter to hold the name of the argument to main
 *
 * Return: returns 0 (if success)
 *
 */

int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
