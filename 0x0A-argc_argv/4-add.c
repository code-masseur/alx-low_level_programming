#include <stdio.h>
#include <stdlib.h>

/**
 * main - main adds positive numbers, prints 0 if no number is passed
 * @argc: parameter to hold the argument count to main
 * @argv: parameter to hold the name of the argument to main
 *
 * Return: returns 0 (if success), 1 if error,
 *
 */

int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	int x;
	int add;

	add = 0;

	if (argc > 1)
	{
		if (!(argc >= 48 && argc <= 57))
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			for (x = 1; x < argc; x++)
			{
				add += atoi(argv[x]);
			}
			printf("%d\n", add);
		}
	}
	else if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
