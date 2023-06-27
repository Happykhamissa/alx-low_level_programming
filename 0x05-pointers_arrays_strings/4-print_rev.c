#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string to print i reverse
 * Return: always 0
 */

void print_rev(char *s)

{
	int length = 0;
	int o;

	while (*s != '\0')
	{
		length++;
		s++;
	}
		s--;
	for (o = length; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
