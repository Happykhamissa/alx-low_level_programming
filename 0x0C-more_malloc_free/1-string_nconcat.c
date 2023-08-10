#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: first string
* @s2: second string
* @n: the first size of the s2
*
* Return: A pointer to the newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int length = n
	unsigned int i;
	char *str-nconcat;
	
	if (s1 == NULL)
		s1 = (NULL);

	if (s2 == NULL)
		s2 = (NULL);

	for(i = 0; s1[i]; i++)
	{
		length++;
	str-nconcat = (char *)malloc((length + 1) * sizeof(char));
	
        if (str-nconcat == NULL)
        {
                printf("Memory allocation failed\n");
                return (NULL);
        }
	length = 0;

	for (i = 0; s1[i]; i++)
		strcpy(str-nconcat, s1);

	for (i = 0; s2[i] && i < n; i++)
		strcat(str-nconcat, s2);
	}
        return (str-nconcat);
}
