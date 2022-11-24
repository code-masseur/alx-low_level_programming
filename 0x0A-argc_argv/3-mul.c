#include <stdio.h>
#include <stdlib.h>

/**
 * main - main multiplies two numbers and prints the result
 * followed by a new line
 * @argc: parameter to hold the argument count to main
 * @argv: parameter to hold the name of the argument to main
 *
 * Return: returns 0 (if success); error if arguments not 2
 *
 */

int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	int x;
	int mul;

	mul = 1;

	if (argc == 3)
	{
		for (x = 1; x < argc; x++)
		{
			mul *= atoi(argv[x]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}

	return (0);
}
