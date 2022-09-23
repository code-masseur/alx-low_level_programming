#include<stdio.h>
#include<stdlib>
/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);
	putchar('\n');
}
