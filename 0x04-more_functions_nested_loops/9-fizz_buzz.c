#include "main.h"
#include <stdio.h>

/**
 * main - a fizzbuzz program usng the multiples of 3 and 5
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int z;

	for (z = 1; z <= 100; z++)
	{
		if (z % 3 == 0)
		{
			printf("Fizz");
		}
		else if (z % 5 == 0)
		{
			printf("Buzz");
		}
		else if (z % 3 == 0 && z % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", z);
		}
		if (z != 100)
		{
			putchar(32);
		}
	}
	printf('\n');

	return (0);
}
