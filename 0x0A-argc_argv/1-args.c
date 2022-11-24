#include <stdio.h>
#include <stdlib.h>

/**
 * main - main prints the number of arguments passed to it
 * @argc: parameter to hold the argument count to main
 * @argv: parameter to hold the name of the argument to main
 *
 * Return: returns 0 (if success)
 *
 */

int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
