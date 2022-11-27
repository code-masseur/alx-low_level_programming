#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main adds positive numbers, prints 0 if no number is passed
 * @argc: parameter to hold the argument count to main
 * @argv: parameter to hold the name of the argument to main
 *
 * Return: returns 0 (if success), 1 if error,
 *
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int add;

	add = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[x]);

	}
	printf("%d\n", add);
	return (0);
}
