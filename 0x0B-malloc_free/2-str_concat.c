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
 * _strcat - is a function that concatenates two strings.
 * @dest: input value
 * @src:input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)

{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: A pointer points to a newly allocated space in memory
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int length1 = strlen(s1);
	unsigned int length2 = strlen(s2);

	char *string = (char *)malloc(((length1 + length2) + 1) * sizeof(char));

	if (string == NULL)
	{
		printf("memory not available");
		return (NULL);
	}

		strcpy(string, s1);
		strcat(string, s2);
	return (string);
}
