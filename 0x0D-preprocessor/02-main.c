#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	const char *filename = __FILE__;

	while (*filename)
	{
		putchar(*filename);
		filename++;
	}

	putchar('\n');

	return (0);
}
