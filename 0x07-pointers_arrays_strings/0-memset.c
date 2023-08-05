#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the size of the memory to print
 * @b: the address of memory to print
 * @n: unsigned integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
