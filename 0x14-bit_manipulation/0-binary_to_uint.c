#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
		unsigned int result = 0;
		int i, length = strlen(b);

		for (i = 0; i < length; i++)
		{
			if (b[i] == '1')
				result = (result << 1) | 1;

			else if (b[i] == '0')
			{
				result = result << 1;
			}
			else
			{
				return (0);
			}
		}
		return (result);
}
