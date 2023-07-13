#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory.
 * @b: bytes
 *
 * Return: A pointer (success)
 * if malloc fails malloc_checked returns a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
