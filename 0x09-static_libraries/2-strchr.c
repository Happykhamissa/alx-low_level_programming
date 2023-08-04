#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @c: character to lacate
 * @s: string
 * Return: a pointer or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}

