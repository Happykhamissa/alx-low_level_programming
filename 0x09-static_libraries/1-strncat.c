#include "main.h"


/**
 * _strncat - function concatenate two strings
 * using at most n bytes from src
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
		int i, j;
		i = 0;

		while (dest[i] != '\0')
		{
			i++;
		}
		j = 0;

		while (j < n && src[j] != '\0')
		{
		dest[i] = src[j];
		i++;
		j++;
		}
		dest[i] = '\0';
		return (dest);

}


