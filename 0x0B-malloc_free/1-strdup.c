#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * char *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * and contains a copy of the string given as a parameter.
 * @str: a string
 *
 * Return: A pointer to the duplicated string
 * NULL if memory allocation fails or input string is NULL.
 */

char *_strdup(char *str)
{

	char *NewString = NULL;
	unsigned int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	NewString = (char *)malloc((length + 1) * sizeof(char));

	if (NewString == NULL)
	{
		printf("memory not available");
		return (NULL);
	}
	else
		strcpy(NewString, str);
	return (NewString);
}
