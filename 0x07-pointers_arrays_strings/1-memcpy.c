#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @src: adress of memory to print
 * @dest: value to print
 * @n: tirth value
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);

}
