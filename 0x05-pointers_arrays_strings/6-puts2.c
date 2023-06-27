#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: inputed string
 * Return: print
 */

void puts2(char *str)

{
	int i = 0;
	int length = 0;
	char *a = str;
	int o;

	while (*a != '\0')
	{
		a++;
		length++;
	}
	i = length - 1;
	for (o = 0; o <= i; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
