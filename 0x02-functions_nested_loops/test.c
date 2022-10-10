#include <stdio.h>
#include "main.h"

/**
 * Main - Prints Maduabuchi using _putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char printmadu[] = "_putchar\n";
	int i;
	char j;

	for (i = 0; i <= 8; i++)
	{
		j = printmadu[i];
		putchar(j);	
	}
	
	/**
	 * while (i <= 10)
	{
		j = printmadu[i];
		putchar(j);
		j++;
	}*/
	return (0);
}
