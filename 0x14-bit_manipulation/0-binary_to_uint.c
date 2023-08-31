#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;
	unsigned int n = 0, x;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	if (b[i] != 48 && b[i] != 49)
		return (0);

	i--;
	for (j = 0; b[j]; j++)
	{
		x =  b[j] - 48;
		n += x << i;
		i--;
	}
	return (n);
}
