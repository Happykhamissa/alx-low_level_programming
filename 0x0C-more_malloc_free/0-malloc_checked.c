#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: the size
*
* Return: A pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{

	void *A;

	A = malloc(b);
	if (A == NULL)
	{
		exit(98);
	}
	return (A);
}

