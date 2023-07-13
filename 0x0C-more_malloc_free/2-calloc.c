#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: elemnets of an array
 * @size: amount of bytes
 *
 * Return: A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{	char *ptr;
	unsigned int i;
	unsigned int totalSize = nmemb * size;

	if (nmemb == 0 || size == 0)
		return  (NULL);

	ptr = malloc(totalSize);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < totalSize; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);

}
