#include <stdio.h>
#include <stdlib.h>

/**
 * main - main prints the names of all arguments passed to it, each on a new line
 * @argc: parameter to hold the argument count to main
 * @argv: parameter to hold the name of the argument to main
 *
 * Return: returns 0 (if success)
 *
 */

int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	int x;
	
	if(argc >= 0)
	{
		for(x = 0; x < argc; x++)
		{
			printf("%s\n", argv[x]);
		}
	}

	return (0);
}
